#include<stdio.h>

int *test(int *n);

main()
{

	int a = 5, *t = &a;
	t = test(t);	
	printf("%d\n", *t);
}


static int *test(int *n)
{
	*n += 8;
	return n;
}
