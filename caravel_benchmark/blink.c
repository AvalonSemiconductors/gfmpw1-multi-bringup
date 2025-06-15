#include <defs.h>

#include "e_pow.h"
#include "custom_math.h"
#include "tholinstd.h"

//Clock speed of the chip must be specified here, for correct Raystones score calculation
#define F_CLK 10000000

//Define that toggles code specific to my GFMPW-1 ICs
//If set:
// - Ensures design in user area is in idle state
// - Enables additional debugging to make sure all is O.K.
// - Makes use of custom peripherals on the wishbone bus
//Undefining this still yields working code, but with some additional limitations
#undef THOLIN_SILICON

#ifdef THOLIN_SILICON
#define reg_mprj_counter_addr_multi 0x30040000
#define reg_mprj_counter_addr_as 0x30400000
#define reg_mprj_proj_sel (*(volatile uint32_t*)0x30080000)
#define reg_mprj_settings (*(volatile uint32_t*)0x30020000)
#define reg_mprj_sram (*(volatile uint32_t*)0x30010000)
#define reg_mprj_debug_opts_as2650 (*(volatile uint32_t*)0x30200000)
#endif

#ifdef THOLIN_SILICON
//Both of my designs have a simple up-counter connected to the wishbone bus
//But they’re at different addresses
volatile uint32_t *counter_address;
volatile uint8_t is_as2650;
#endif
//To handle 32-bit timer overflows (the render can take a while)
volatile uint32_t last_timer_val;
volatile uint32_t timer_upper;

//Workaround to funni cache bug
void wb_cache_workaround() { asm volatile("nop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop"); }

/*
 * That’s it for GFMPW-1 specific code for now. Scroll down.
 */

typedef int BOOL;

static inline float max(float x, float y) { return x>y?x:y; }
static inline float min(float x, float y) { return x<y?x:y; }

// If you want to adapt tinyraytracer to your own platform, there are
// mostly two macros and two functions to write:
//   graphics_width
//   graphics_height
//   graphics_init()
//   graphics_set_pixel()
//
// You can also write the following functions (or leave them empty if
// you do not need them):
//   graphics_terminate()
//   stats_begin_frame()
//   stats_begin_pixel()
//   stats_end_pixel()
//   stats_end_frame()


// Size of the screen
// Replace with your own variables or values

// Benchmark
// - graphics deactivated (else UART waiting loop gives
//   different results according to CPU freq / UART baud rate
//   ratio).
// - smaller image size (for faster run in simulation)

static int graphics_width  = 640;
static int graphics_height = 480;

static int bench_run=0;

static int lastx;
static int lasty;

// Replace with your own stuff to initialize graphics
static inline void graphics_init() {
	if(!bench_run) printf("BEGIN-%d-%d\r\n", graphics_width, graphics_height);
}

// Replace with your own stuff to terminate graphics or leave empty
// Here I send <ctrl><D> to the UART, to exit the simulation in Verilator,
// it is captured by special code in RTL/DEVICES/uart.v
static inline void graphics_terminate() {
	if(!bench_run) puts("END");
}

// Replace with your own code.
void graphics_set_pixel(int x, int y, float r, float g, float b) {
	uint8_t changed = x != lastx + 1 || y != lasty;
	if(changed) {
		printf("%%%d-%d-", x, y);
	}
	if(!bench_run || changed) printf("%f-%f-%f\r\n", r, g, b);
	lastx = x;
	lasty = y;
}


// Begins statistics collection for current pixel
// Leave emtpy if not needed.
// There are these two levels because on some
// femtorv32 cores (quark, tachyon), the clock tick counter does not
// have sufficient bits and will wrap during the time taken by
// rendering a frame (up to several minutes).
static inline void stats_begin_pixel() {
}

// Ends statistics collection for current pixel
// Leave emtpy if not needed.
static inline void stats_end_pixel() {
}

// Begins statistics collection for current frame.
// Leave emtpy if not needed.
static inline void stats_begin_frame() {
#ifdef THOLIN_SILICON
	*counter_address = 0;
	wb_cache_workaround();
#else
	reg_timer0_config = 0;
	reg_timer0_data = 0;
	reg_timer0_value = 0;
	reg_timer0_data_periodic = 0xFFFFFFFF;
	reg_timer0_config = 1;
#endif
	last_timer_val = 0;
	timer_upper = 0;
	lastx = lasty = 0xFFFFFFFF;
}

// Ends statistics collection for current frame
// and displays result.
// Leave emtpy if not needed.
static inline void stats_end_frame() {
   graphics_terminate();
   uint64_t pixels     = graphics_width * graphics_height;
   uint64_t timer_reading;
#ifdef THOLIN_SILICON
	uint32_t capture = *counter_address;
	wb_cache_workaround();
	if(capture < last_timer_val) timer_upper++;
	timer_reading = (uint64_t)timer_upper << 32;
	timer_reading |= capture;
#else
	reg_timer0_update = 1;
	uint32_t capture = 0xFFFFFFFF - reg_timer0_value;
	if(capture < last_timer_val) timer_upper++;
	timer_reading = (uint64_t)timer_upper << 32;
	timer_reading |= capture;
#endif
	printf("Timer capture=%lu\r\n", timer_reading);
   float RAYSTONES     = (float)pixels / ((float)timer_reading / F_CLK) / (F_CLK / 1000000);
   printf("RAYSTONES=%f\r\n", RAYSTONES);
}

// Normally you will not need to modify anything beyond that point.
/*******************************************************************/

typedef struct { float x,y,z; }   vec3;
typedef struct { float x,y,z,w; } vec4;

static inline vec3 make_vec3(float x, float y, float z) {
  vec3 V;
  V.x = x; V.y = y; V.z = z;
  return V;
}

static inline vec4 make_vec4(float x, float y, float z, float w) {
  vec4 V;
  V.x = x; V.y = y; V.z = z; V.w = w;
  return V;
}

static inline vec3 vec3_neg(vec3 V) {
  return make_vec3(-V.x, -V.y, -V.z);
}

static inline vec3 vec3_add(vec3 U, vec3 V) {
  return make_vec3(U.x+V.x, U.y+V.y, U.z+V.z);
}

static inline vec3 vec3_sub(vec3 U, vec3 V) {
  return make_vec3(U.x-V.x, U.y-V.y, U.z-V.z);
}

static inline float vec3_dot(vec3 U, vec3 V) {
  return U.x*V.x+U.y*V.y+U.z*V.z;
}

static inline vec3 vec3_scale(float s, vec3 U) {
  return make_vec3(s*U.x, s*U.y, s*U.z);
}

static inline float vec3_length(vec3 U) {
  return sqrtf(U.x*U.x+U.y*U.y+U.z*U.z);
}

static inline vec3 vec3_normalize(vec3 U) {
  return vec3_scale(1.0f/vec3_length(U),U);
}

/*************************************************************************/

typedef struct Light {
    vec3 position;
    float intensity;
} Light;

Light make_Light(vec3 position, float intensity) {
  Light L;
  L.position = position;
  L.intensity = intensity;
  return L;
}

/*************************************************************************/

typedef struct {
    float refractive_index;
    vec4  albedo;
    vec3  diffuse_color;
    float specular_exponent;
} Material;

Material make_Material(float r, vec4 a, vec3 color, float spec) {
  Material M;
  M.refractive_index = r;
  M.albedo = a;
  M.diffuse_color = color;
  M.specular_exponent = spec;
  return M;
}

Material make_Material_default() {
  Material M;
  M.refractive_index = 1;
  M.albedo = make_vec4(1,0,0,0);
  M.diffuse_color = make_vec3(0,0,0);
  M.specular_exponent = 0;
  return M;
}

/*************************************************************************/

typedef struct {
  vec3 center;
  float radius;
  Material material;
} Sphere;

Sphere make_Sphere(vec3 c, float r, Material M) {
  Sphere S;
  S.center = c;
  S.radius = r;
  S.material = M;
  return S;
}

BOOL Sphere_ray_intersect(Sphere* S, vec3 orig, vec3 dir, float* t0) {
  vec3 L = vec3_sub(S->center, orig);
  float tca = vec3_dot(L,dir);
  float d2 = vec3_dot(L,L) - tca*tca;
  float r2 = S->radius*S->radius;
  if (d2 > r2) return 0;
  float thc = sqrtf(r2 - d2);
  *t0       = tca - thc;
  float t1 = tca + thc;
  if (*t0 < 0) *t0 = t1;
  if (*t0 < 0) return 0;
  return 1;
}

vec3 reflect(vec3 I, vec3 N) {
  return vec3_sub(I, vec3_scale(2.f*vec3_dot(I,N),N));
}

vec3 refract(vec3 I, vec3 N, float eta_t, float eta_i /* =1.f */) {
  // Snell's law
  float cosi = -max(-1.f, min(1.f, vec3_dot(I,N)));
  // if the ray comes from the inside the object, swap the air and the media  
  if (cosi<0) return refract(I, vec3_neg(N), eta_i, eta_t); 
    float eta = eta_i / eta_t;
    float k = 1 - eta*eta*(1 - cosi*cosi);
    // k<0 = total reflection, no ray to refract.
    // I refract it anyways, this has no physical meaning
    return k<0 ? make_vec3(1,0,0)
              : vec3_add(vec3_scale(eta,I),vec3_scale((eta*cosi - sqrtf(k)),N));
}

BOOL scene_intersect(
   vec3 orig, vec3 dir, Sphere* spheres, int nb_spheres,
   vec3* hit, vec3* N, Material* material
) {
  float spheres_dist = 1e30;
  for(int i=0; i<nb_spheres; ++i) {
    float dist_i;
    if(
       Sphere_ray_intersect(&spheres[i], orig, dir, &dist_i) &&
       (dist_i < spheres_dist)
    ) {
      spheres_dist = dist_i;
      *hit = vec3_add(orig,vec3_scale(dist_i,dir));
      *N = vec3_normalize(vec3_sub(*hit, spheres[i].center));
      *material = spheres[i].material;
    }
  }
  float checkerboard_dist = 1e30;
  if (fabs(dir.y)>1e-3)  {
    float d = -(orig.y+4)/dir.y; // the checkerboard plane has equation y = -4
    vec3 pt = vec3_add(orig, vec3_scale(d,dir));
    if (d>0 && fabs(pt.x)<10 && pt.z<-10 && pt.z>-30 && d<spheres_dist) {
      checkerboard_dist = d;
      *hit = pt;
      *N = make_vec3(0,1,0);
      material->diffuse_color =
	(((int)(.5*hit->x+1000) + (int)(.5*hit->z)) & 1)
	             ? make_vec3(.3, .3, .3)
	             : make_vec3(.3, .2, .1);
    }
  }
  return min(spheres_dist, checkerboard_dist)<1000;
}

vec3 cast_ray(
   vec3 orig, vec3 dir, Sphere* spheres, int nb_spheres,
   Light* lights, int nb_lights, int depth /* =0 */
) {
  vec3 point,N;
  Material material = make_Material_default();
  if (
    depth>2 ||
    !scene_intersect(orig, dir, spheres, nb_spheres, &point, &N, &material)
  ) {
    float s = 0.5*(dir.y + 1.0);
    return vec3_add(
	vec3_scale(s,make_vec3(0.2, 0.7, 0.8)),
        vec3_scale(s,make_vec3(0.0, 0.0, 0.5))
    );
  }

  vec3 reflect_dir=vec3_normalize(reflect(dir, N));
  vec3 refract_dir=vec3_normalize(refract(dir,N,material.refractive_index,1));
  
  // offset the original point to avoid occlusion by the object itself 
  vec3 reflect_orig =
    vec3_dot(reflect_dir,N) < 0
               ? vec3_sub(point,vec3_scale(1e-3,N))
               : vec3_add(point,vec3_scale(1e-3,N)); 
  vec3 refract_orig =
    vec3_dot(refract_dir,N) < 0
               ? vec3_sub(point,vec3_scale(1e-3,N))
               : vec3_add(point,vec3_scale(1e-3,N));
  vec3 reflect_color = cast_ray(
       reflect_orig, reflect_dir, spheres, nb_spheres,
       lights, nb_lights, depth + 1
  );
  vec3 refract_color = cast_ray(
       refract_orig, refract_dir, spheres, nb_spheres,
       lights, nb_lights, depth + 1
  );
  
  float diffuse_light_intensity = 0, specular_light_intensity = 0;
  for (int i=0; i<nb_lights; i++) {
    vec3  light_dir = vec3_normalize(vec3_sub(lights[i].position,point));
    float light_distance = vec3_length(vec3_sub(lights[i].position,point));

    vec3 shadow_orig =
      vec3_dot(light_dir,N) < 0
                ? vec3_sub(point,vec3_scale(1e-3,N))
                : vec3_add(point,vec3_scale(1e-3,N)) ;
    // checking if the point lies in the shadow of the lights[i]
    vec3 shadow_pt, shadow_N;
    Material tmpmaterial;
    if (
       scene_intersect(
	 shadow_orig, light_dir, spheres, nb_spheres,
	 &shadow_pt, &shadow_N, &tmpmaterial
       ) && (
  	 vec3_length(vec3_sub(shadow_pt,shadow_orig)) < light_distance
	     )
    ) continue ;
    
    diffuse_light_intensity  +=
                  lights[i].intensity * max(0.f, vec3_dot(light_dir,N));
     
    float abc = max(
	           0.f, vec3_dot(vec3_neg(reflect(vec3_neg(light_dir), N)),dir)
	        );
    float def = material.specular_exponent;
    if(abc > 0.0f && def > 0.0f) {
      //specular_light_intensity += powf(abc,def)*lights[i].intensity;
    }
  }
  vec3 result = vec3_scale(
      diffuse_light_intensity * material.albedo.x, material.diffuse_color
  );
  result = vec3_add(
       result, vec3_scale(specular_light_intensity * material.albedo.y,
       make_vec3(1,1,1))
  );
  result = vec3_add(result, vec3_scale(material.albedo.z, reflect_color));
  result = vec3_add(result, vec3_scale(material.albedo.w, refract_color));
  return result;
}

static inline void render_pixel(
    int i, int j, Sphere* spheres, int nb_spheres, Light* lights, int nb_lights
) {
	
#ifdef THOLIN_SILICON
{
	uint32_t capture = *counter_address;
	wb_cache_workaround();
	if(capture < last_timer_val) timer_upper++;
	last_timer_val = capture;
}
#else
{
	reg_timer0_update = 1;
	uint32_t capture = 0xFFFFFFFF - reg_timer0_value;
	if(capture < last_timer_val) timer_upper++;
	last_timer_val = capture;
}
#endif
	
   const float fov  = M_PI/3.;
   stats_begin_pixel();
   float dir_x =  (i + 0.5) - graphics_width/2.;
   float dir_y = -(j + 0.5) + graphics_height/2.; // this flips the image.
   float dir_z = -graphics_height/(2.*tan(fov/2.));
   vec3 C = cast_ray(
       make_vec3(0,0,0), vec3_normalize(make_vec3(dir_x, dir_y, dir_z)),
       spheres, nb_spheres, lights, nb_lights, 0
   );
   graphics_set_pixel(i,j,C.x,C.y,C.z);
   stats_end_pixel();
}

void render(Sphere* spheres, int nb_spheres, Light* lights, int nb_lights) {
   stats_begin_frame();
   for(int j = 0; j<graphics_height; j++) {
      for(int i = 0; i<graphics_width; i++) {
		  reg_gpio_out ^= 1;
	  render_pixel(i,j  ,spheres,nb_spheres,lights,nb_lights);
      }
   }
   stats_end_frame();
}

int nb_spheres = 4;
Sphere spheres[4];

int nb_lights = 3;
Light lights[3];

void init_scene() {
    Material ivory = make_Material(
       1.0, make_vec4(0.6,  0.3, 0.1, 0.0), make_vec3(0.4, 0.4, 0.3),   50.
    );
    Material glass = make_Material(
       1.5, make_vec4(0.0,  0.5, 0.1, 0.8), make_vec3(0.6, 0.7, 0.8),  125.
    );
    Material red_rubber = make_Material(
       1.0, make_vec4(0.9,  0.1, 0.0, 0.0), make_vec3(0.3, 0.1, 0.1),   10.
    );
    Material mirror = make_Material(
       1.0, make_vec4(0.0, 10.0, 0.8, 0.0), make_vec3(1.0, 1.0, 1.0),  142.
    );

    spheres[0] = make_Sphere(make_vec3(-3,    0,   -16), 2,      ivory);
    spheres[1] = make_Sphere(make_vec3(-1.0, -1.5, -12), 2,      glass);
    spheres[2] = make_Sphere(make_vec3( 1.5, -0.5, -18), 3, red_rubber);
    spheres[3] = make_Sphere(make_vec3( 7,    5,   -18), 4,     mirror);

    lights[0] = make_Light(make_vec3(-20, 20,  20), 1.5);
    lights[1] = make_Light(make_vec3( 30, 50, -25), 1.8);
    lights[2] = make_Light(make_vec3( 30, 20,  30), 1.7);
}

/*
 * CARAVEL-SPECIFIC STUFF
 */

void configure_io() {
	reg_mprj_io_0 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;

	reg_mprj_io_1 = GPIO_MODE_MGMT_STD_OUTPUT;
	reg_mprj_io_2 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;
	reg_mprj_io_3 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;
	reg_mprj_io_4 = GPIO_MODE_MGMT_STD_INPUT_PULLDOWN;

	reg_mprj_io_5 = GPIO_MODE_MGMT_STD_INPUT_PULLUP;     // UART Rx
	reg_mprj_io_6 = GPIO_MODE_MGMT_STD_OUTPUT;           // UART Tx
	reg_mprj_io_7 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_8 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_9 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_10 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_11 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_12 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_13 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_14 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_15 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_16 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_17 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_18 = GPIO_MODE_USER_STD_OUTPUT;

	reg_mprj_io_19 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_20 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_21 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_22 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_23 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_24 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_25 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_26 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_27 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_28 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_29 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_30 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_31 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_32 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_33 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_34 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_35 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_36 = GPIO_MODE_USER_STD_OUTPUT;
	reg_mprj_io_37 = GPIO_MODE_USER_STD_OUTPUT;

	// Initiate the serial transfer to configure IO
	reg_mprj_xfer = 1;
	while (reg_mprj_xfer == 1);
}

void delay(const int d) {
	/* Configure timer for a single-shot countdown */
	reg_timer0_data_periodic = 0;
	reg_timer0_config = 0;
	reg_timer0_data = d;
	reg_timer0_config = 1;
	// Loop, waiting for value to reach zero
	reg_timer0_update = 1;  // latch current value
	while(reg_timer0_value > 0) {
		reg_timer0_update = 1;
	}
}

struct la_reading {
	uint32_t TEMP;
	uint8_t halted;
	uint8_t r3;
	uint8_t r2;
	uint8_t r1;
	uint8_t r0;
	uint8_t gpios;
};

void la_read(struct la_reading *res) {
	reg_la_sample = 1;
	uint64_t raw = reg_la2_data_in;
	raw |= (uint64_t)reg_la3_data_in << 32;
	res->TEMP = raw >> 33;
	res->r0 = raw;
	res->r1 = raw >> 8;
	res->r2 = raw >> 16;
	res->r3 = raw >> 24;
	res->halted = (raw >> 32) & 1;
	res->gpios = raw >> 56;
}

int putchar(int c) {
	reg_uart_data = c;
	while(reg_uart_txfull == 1);
	return c;
}

void main() {
	reg_gpio_mode1 = 1;
	reg_gpio_mode0 = 0;
	reg_gpio_ien = 1;
	reg_gpio_oeb = 0;
	reg_gpio_out = 0;

	reg_wb_enable = 1;
	configure_io();
	reg_uart_enable = 1;
	
	printf("Proj. ID: %x\r\n", reg_hkspi_user_id);

#ifdef THOLIN_SILICON
	is_as2650 = reg_hkspi_user_id == 0x5EEC8018;
	if(is_as2650) {
		//Its the AS2650-2 die
		reg_la0_oenb = reg_la1_oenb = reg_la0_iena = reg_la1_iena = reg_la2_iena = reg_la2_oenb = reg_la3_iena = reg_la3_oenb = 0x00000000;
		counter_address = (volatile uint32_t*)reg_mprj_counter_addr_as; //Counter at this address
		reg_mprj_debug_opts_as2650 = (1 << 4) | (1 << 5); //Force reset on the AS2650
	}else {
		//Its the multi-project die
		reg_la0_oenb = reg_la1_oenb = reg_la0_iena = reg_la1_iena = reg_la2_iena = reg_la2_oenb = reg_la3_iena = reg_la3_oenb = 0xFFFFFFFF;
		counter_address = (volatile uint32_t*)reg_mprj_counter_addr_multi; //Counter at that address
		reg_mprj_proj_sel = 0b0000111;
		wb_cache_workaround();
		reg_mprj_settings = (10000000/115200)-1; //TEST
	}
	wb_cache_workaround();
#else
	reg_la0_oenb = reg_la1_oenb = reg_la0_iena = reg_la1_iena = 0xFFFFFFFF;
#endif
	
	delay(8500000); //Allow HKSPI time to take control - things may go wrong from here on out
	
	reg_spictrl = (1 << 31); //Least possible number of wait states (0) - hope this won’t break anything!
	
#ifdef THOLIN_SILICON
	*counter_address = 0;
	wb_cache_workaround();
	//Obtain time measurement, test
	printf("Timer test: *%x = %x\r\n", (uint32_t)counter_address, *counter_address);
	wb_cache_workaround();
	if(*counter_address == 0) {
		printf("Timer not working. Aborting.\r\n");
		while(1);
	}
	//La test
	if(is_as2650) {
		struct la_reading reading;
		la_read(&reading);
		printf("LA Test: %x %x %x %x %x\r\n", reading.TEMP, reading.r0, reading.r1, reading.r2, reading.r3);
	}
#else
	reg_timer0_config = 0;
	reg_timer0_data = 0;
	reg_timer0_value = 0;
	reg_timer0_data_periodic = 0xFFFFFFFF;
	reg_timer0_config = 1;
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	asm volatile("nop");
	reg_timer0_update = 1;
	//Obtain time measurement, test
	printf("Timer test: %x\r\n", 0xFFFFFFFF - reg_timer0_value);
#endif
	
	//You have to send a character 'a' over the UART before the CPU gets to this point to actually render out the image
	//It defaults to benchmark mode otherwise
	//Benchmark mode = reduced render resolution, disable actually outputting the image
	bench_run = 0;
	uint8_t rec = reg_uart_data;
	if(rec != 'a') {
		puts("Benchmark mode ACTIVATE!\r\n");
		graphics_width  = 80;
		graphics_height = 40;
		bench_run = 1;
	}else {
		graphics_width = 640;
		graphics_height = 480;
	}
	
	//float f1 = 3.14159;
	//float f2 = 2;
	//f2 = f1 / f2 + f1;
	//printf("aaaa\r\n%f\r\n", f2);
	
	init_scene();
	graphics_init();
	render(spheres, nb_spheres, lights, nb_lights);
	graphics_terminate();
	
	//We’re done, blink GPIO forever
	while(1) {
		reg_gpio_out ^= 1;
		delay(2000000);
	}
}

