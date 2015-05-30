#include <stdio.h>
#define VARIANT 0
unsigned long int next = 1;

int randA(void)
{	
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}


void srandA(unsigned int seed)
{
	next = seed;
}
