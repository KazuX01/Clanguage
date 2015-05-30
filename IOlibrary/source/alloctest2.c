#include<stdlib.h>
#include<stdio.h>
#include<time.h>


main()
{
	char *a, *b, *c, *d, *e;
	clock_t sta, end;
	sta = clock();

	printf("char_size=%d\n", sizeof(char));
	a = (char *) malloc(sizeof(char));
	b = (char *) malloc(sizeof(char));
	c = (char *) malloc(sizeof(char));
	d = (char *) malloc(sizeof(char));
	e = (char *) malloc(sizeof(char));
	printf("a=%p  b=%p  c=%p  d=%p  e=%p\n", a, b, c, d, e);

	*a = 'a', *b = 'b', *c ='c', *d = 'd', *e = 'e';
	printf("a=%c  b=%c  c=%c  d=%c  e=%c\n", *a, *b, *c, *d, *e);	

	printf("%d   %d\n", (int)(b-a), (int)b - (int)a);



	end = clock();
	printf("time_second=%.5lf\n", (double)(end-sta)/CLOCKS_PER_SEC);
}
