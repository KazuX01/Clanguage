#include <stdio.h>
#include <limits.h>

/*
short int si;
long int li;
abbreviation int
short si;
long li;
*/


long signed_min(long byte);
long signed_max(long byte);

int main(int argc, char *argv[])
{
	printf("%15s:%ld byte,min:%20d,max:%20u\n","unsigned int",sizeof(unsigned int),0,UINT_MAX);
	printf("%15s:%ld byte,min:%20d,max:%20d\n","signed int",sizeof(signed int),INT_MIN,INT_MAX);

	printf("%15s:%ld byte,min:%20d,max:%20u\n","unsigned char",sizeof(unsigned char),0,UCHAR_MAX);
	printf("%15s:%ld byte,min:%20d,max:%20d\n","signed char",sizeof(signed char),SCHAR_MIN,SCHAR_MAX);

	printf("%15s:%ld byte,min:%20d,max:%20u\n","unsigned short",sizeof(unsigned short),0,USHRT_MAX);
	printf("%15s:%ld byte,min:%20d,max:%20d\n","signed short",sizeof(signed short),SHRT_MIN,SHRT_MAX);

	printf("%15s:%ld byte,min:%20d,max:%20lu\n","unsigned long",sizeof(unsigned long),0,ULONG_MAX);
	printf("%15s:%ld byte,min:%20ld,max:%20ld\n","signed long",sizeof(signed long),LONG_MIN,LONG_MAX);

	printf("-----calculate-----\n");
	printf("%15s:%ld byte,min:%20d,max:%20ld\n","signed int",sizeof(signed int),signed_min(sizeof(signed int)),signed_max(sizeof(signed int)));
	printf("%15s:%ld byte,min:%20d,max:%20ld\n","signed char",sizeof(signed char),signed_min(sizeof(signed char)),signed_max(sizeof(signed char)));
	printf("%15s:%ld byte,min:%20d,max:%20ld\n","signed short",sizeof(signed short),signed_min(sizeof(signed short)),signed_max(sizeof(signed short)));

	return 0;
}


long signed_min(long byte)
{
	int i;
	long p, bit;
	bit = byte * 8;

	p = 1;
	for (i =0; i < bit; ++i){
		p = p * 2;
	}
	p = ((p + 1) / 2) * -1;

	return p;
}

long signed_max(long byte)
{
	int i;
	long p, bit;
	bit = byte * 8;

	p = 1;
	for (i = 0; i < bit; ++i) {
		p = p * 2;
	}
	p = ((p - 1) / 2);
	
	return p;
}
