#include<stdlib.h>
#include<stdio.h>
#include<time.h>


main()
{
	int *a, *b, *c, *d, *e;
	clock_t sta, end;
	sta = clock();

	printf("int_size=%d\n", sizeof(int));
	a = (int *) malloc(sizeof(int));
	b = (int *) malloc(sizeof(int));
	c = (int *) malloc(sizeof(int));
	d = (int *) malloc(sizeof(int));
	e = (int *) malloc(sizeof(int));
	printf("a=%p  b=%p  c=%p  d=%p  e=%p\n", a, b, c, d, e);

	*a = 3, *b = 5, *c =7, *d = 1, *e = 9;
	printf("a=%d  b=%d  c=%d  d=%d  e=%d\n", *a, *b, *c, *d, *e);	

	printf("%d   %d\n", (int)(b-a), (int)b - (int)a);



	end = clock();
	printf("time_second=%.5lf\n", (double)(end-sta)/CLOCKS_PER_SEC);
}
