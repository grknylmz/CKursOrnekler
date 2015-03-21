
#ifndef _NUTILITY_H_
#define _NUTILITY_H_
#define asize(a) 	(sizeof((a));
#include <stddef.h>

int isprime(int ival);
int *setRandomArray(int *ptr, int size);
int *reverseArray(int *ptr, int size);
void displayArray(const int *ptr, int size);
void sl(void);
void randomize(void);
void swap(int *p1, int *p2);
void delay(double sec);
void gswap(void *vp1, void*vp2, size_t n);







#endif
