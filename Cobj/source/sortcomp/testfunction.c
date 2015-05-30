#include<stdio.h>

void intecho(int *);
int strecho(char *);

main()
{
	int i = 2, *p = &i;
	void (*test)(void *);
	printf("pointerint%d\n", *p);
	test = intecho;
	printf("functionAddress = %p\n", test);
	(*test)(p);
	test = strecho;
	printf("functionAddress = %p\n", test);
	printf("return = %d\n", (*((int (*)(void *))test))("asada kazunori"));
}


void intecho(int *i)
{
	printf("int = %d\n", *i);
}


int strecho(char *s)
{
	printf("str = %s\n", s);
	return 1;
}
