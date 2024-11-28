#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <png.h>

int main(void) {
	FILE *infile = fopen("received.txt", "rb");
	if(!infile) {
		printf("Error opening file\n");
		return 1;
	}
	char beginning = 1;
	long fpos = 0;
	char end = 0;
	char lineBuffer[128];
	int img_width = 0;
	int img_height = 0;
	int posx = 0;
	int posy = 0;
	uint8_t* image = NULL;
	while(!end) {
		memset(lineBuffer, 0, 128);
		fread(lineBuffer, 1, 128, infile);
		for(int i = 0; i < 128; i++) {
			fpos++;
			if(lineBuffer[i] == '\r' || lineBuffer[i] == '\n') {
				lineBuffer[i] = 0;
				if(lineBuffer[i] == '\r' && lineBuffer[i+1] == '\n') {
					fpos++;
				}
				fseek(infile, fpos, SEEK_SET);
				break;
			}else if(lineBuffer[i] == 0) {
				end = 1;
				break;
			}
		}
		if(strlen(lineBuffer) == 0) break;
		char* linePtr = lineBuffer;
		int num_parts = 3;
		char has_coords = 0;
		char reposition = 0;
		if(linePtr[0] == '%') {
			linePtr++;
			num_parts += 2;
			has_coords = 1;
			reposition = 1;
		}
		if(beginning) {
			if(strncmp("BEGIN-", linePtr, 6) != 0) {
				fclose(infile);
				printf("Invalid start line\n");
				return 1;
			}
			linePtr += 6;
			num_parts = 2;
		}
		int curr_part = 0;
		char* parts[5];
		float parsed_parts[5];
		parts[0] = linePtr;
		for(int i = 0; i < 128; i++) {
			if(linePtr[i] == 0) {
				if(curr_part != num_parts - 1) {
					printf("Invalid formating: too few elements\n");
					fclose(infile);
					return 1;
				}
				break;
			}
			if(linePtr[i] == '-') {
				if(curr_part >= num_parts - 1) {
					printf("Invalid formating: too many elements\n");
					fclose(infile);
					return 1;
				}
				linePtr[i] = 0;
				parts[curr_part + 1] = linePtr + i + 1;
				curr_part++;
			}
		}
		for(int i = 0; i < num_parts; i++) {
			parsed_parts[i] = atof(parts[i]);
		}
		if(beginning) {
			img_width = (int)parsed_parts[0];
			img_height = (int)parsed_parts[1];
			int imgsize = img_width * img_height * 3 * sizeof(uint8_t);
			image = (uint8_t*)malloc(imgsize);
			if(!image) {
				printf("Malloc fail :C\n");
				fclose(infile);
				return 1;
			}
			memset(image, 0, imgsize);
			beginning = 0;
			printf("%dx%d\r\n", img_width, img_height);
			continue;
		}
		float r,g,b;
		if(reposition) {
			posx = (int)parsed_parts[0];
			posy = (int)parsed_parts[1];
			r = parsed_parts[2];
			g = parsed_parts[3];
			b = parsed_parts[4];
		}else {
			r = parsed_parts[0];
			g = parsed_parts[1];
			b = parsed_parts[2];
		}
		if(r < 0) r = 0;
		if(g < 0) g = 0;
		if(b < 0) b = 0;
		if(r > 1) r = 1;
		if(g > 1) g = 1;
		if(b > 1) b = 1;
		uint8_t* base = image + (posy * img_width + posx) * 3;
		base++;
		*base = (uint8_t)(g * 255);
		base++;
		*base = (uint8_t)(b * 255);
		posx++;
		if(posx >= img_width) {
			posx = 0;
			posy++;
		}
	}
	fclose(infile);
	
	png_infop info_ptr = NULL;
	png_structp png_ptr = NULL;
	png_byte** row_pointers = NULL;
	int x,y;
	FILE* fp = fopen("output.png", "wb");
	if(!fp) {
		printf("Failed to open output file.\r\n");
		return 1;
	}
	
	png_ptr = png_create_write_struct(PNG_LIBPNG_VER_STRING, NULL, NULL, NULL);
	if(!png_ptr) goto screenshot_failed;
	info_ptr = png_create_info_struct(png_ptr);
	if(!info_ptr) goto screenshot_failed;
	if(setjmp(png_jmpbuf(png_ptr))) goto screenshot_failed;
	png_set_IHDR(png_ptr, info_ptr, img_width, img_height, 8, PNG_COLOR_TYPE_RGB, PNG_INTERLACE_NONE, PNG_COMPRESSION_TYPE_DEFAULT, PNG_FILTER_TYPE_DEFAULT);
	row_pointers = png_malloc(png_ptr, img_height * sizeof(png_byte *));
	uint8_t *base = image;
	for(y = 0; y < img_height; y++) {
		png_byte *row = png_malloc(png_ptr, sizeof(uint8_t) * img_width * 3);
		row_pointers[y] = row;
		for(x = 0; x < img_width; x++) {
			*row++ = *base++;
			*row++ = *base++;
			*row++ = *base++;
		}
	}
	png_init_io(png_ptr, fp);
	png_set_rows(png_ptr, info_ptr, row_pointers);
	png_write_png(png_ptr, info_ptr, PNG_TRANSFORM_IDENTITY, NULL);
	for(y = 0; y < img_height; y++) png_free(png_ptr, row_pointers[y]);
	png_free(png_ptr, row_pointers);
	png_destroy_write_struct(&png_ptr, &info_ptr);
	fclose(fp);
	
	if(image) free(image);
	return 0;
screenshot_failed:
	printf("PNG generate failed.\r\n");
	if(image) free(image);
	return 1;
}
