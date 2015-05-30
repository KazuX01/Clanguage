#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include<time.h>
struct point {
	unsigned short x : 8;
	unsigned short y : 8;
};
unsigned short serchmax(short, ...);

int main(int argc, char **argv)
{
	clock_t tsta, tend;
	tsta = clock();
	struct point *p;
	p = (struct point *) malloc(sizeof(struct point));	
	printf("pointsize = %d\n", sizeof(struct point));
	printf("pointAddress = %p\n" ,p);
	p->x = serchmax(3,6,4,7);
	printf("point x = %3u\n", p->x);
	printf("point y = %3u\n", (*p).y);
	printf("pointNext %p\n", ++p);
	tend = clock();
	printf("second_time = %.8f\n", (double)(tend - tsta)/CLOCKS_PER_SEC);
	return 0;
}


unsigned short serchmax(short argi, ...)
{
  	va_list argva;
	unsigned short temp, rlt = 0;
	short i;
	va_start(argva, argi);
	for (i = 0; i < argi; i++)
		if (rlt < (temp = (unsigned short)(va_arg(argva, int))))
			rlt = temp;
	return rlt;
}	
