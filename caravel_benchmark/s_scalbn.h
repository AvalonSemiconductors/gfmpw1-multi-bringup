#ifndef S_SCALBN_H_
#define S_SCALBN_H_
#define __HI(x) *(1+(int32_t*)&x)
#define __LO(x) (*(int32_t*)&x)
double scalbn (double x, int n);
#endif
