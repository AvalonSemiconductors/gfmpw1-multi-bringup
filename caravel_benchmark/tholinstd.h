#ifndef THOLINSTD_H_
#define THOLINSTD_H_

#define M_PI 3.1415926535897932384626433f

int putchar(int c);
int puts(const char *str);
uint32_t strlen(const char *str);
char* strcpy(char *, const char*);
char* itoa(int32_t s, char *buffer);
char* ltoa(int64_t s, char *buffer);
char* uitoa(uint32_t s, char *buffer);
char* ultoa(uint64_t s, char *buffer);
void printf(const char* format, ...);
void memcpy(uint8_t* dest, uint8_t* src, uint32_t len);

#endif
