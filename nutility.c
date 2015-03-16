#include "nutility.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int isprime(int val)
{
	int k;

	if (val == 0 || val == 1)
		return 0;

	if (val % 2 == 0)
		return val == 2;

	if (val % 3 == 0)
		return val == 3;

	if (val % 5 == 0)
		return val == 5;

	for (k = 7; k * k <= val; k += 2)
	if (val % k == 0)
		return 0;

	return 1;
}


int *setRandomArray(int *ptr, int size)
{
	int *ptemp = ptr;

	while (size--)
		*ptr++ = rand() % 1000;

	return ptemp;
}


void displayArray(const int *ptr, int size)
{
	while (size--)
		printf("%3d ", *ptr++);
	sl();
}


void sl(void)
{
	printf("\n*******************************************************************************\n");
}


void randomize()
{
	srand((unsigned)time(0));
}


void swap(int *p1, int *p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}


int *reverseArray(int *ptr, int size)
{
	int *ptemp = ptr;
	int *pe = ptr + size;

	while (ptr < pe)
		swap(ptr++, --pe);

	return ptemp;
}


void delay(double sec)
{
	clock_t start = clock();

	while ((double)(clock() - start) / CLOCKS_PER_SEC < sec)
		;
}


void gswap(void *vp1, void *vp2, size_t n)
{
	char *p1 = (char *)vp1;
	char *p2 = (char *)vp2;

	while (n--) {
		char temp = *p1;
		*p1++ = *p2;
		*p2++ = temp;
	}
}