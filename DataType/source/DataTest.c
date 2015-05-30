#include <stdio.h>

#define VARIANT 0
unsigned long int next = 1;

int randA(void);
void srandA(unsigned int abc);

main()
{
	int i;
	char c;
	long l;
	short s;
	float f;
	double d;
	enum boolean {NO = 0, YES = 1} isA;
	
	srandA(5);
	printf("rand = %u\n", randA());

}


int randA(void)
{	
	next = next * 1103515245 + 12345;
	return (unsigned int)(next/65536) % 32768;
}


void srandA(unsigned int seed)
{
	next = seed;
}
