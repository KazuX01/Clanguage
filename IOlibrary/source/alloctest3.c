#include<stdlib.h>
#include<stdio.h>
#include<time.h>


main()
{
	char *a, *b, *c, *d, *e;
	clock_t sta, end;
	sta = clock();

	printf("char_size=%d\n", sizeof(char));
	a = (char *) malloc(16*sizeof(char));
	b = (char *) malloc(16*sizeof(char));
	c = (char *) malloc(16*sizeof(char));
	d = (char *) malloc(16*sizeof(char));
	e = (char *) malloc(16*sizeof(char));
	printf("a=%p  b=%p  c=%p  d=%p  e=%p\n", a, b, c, d, e);

	a = "a", b = "b", c ="c", d = "d", e = "e";
	printf("a=%s  b=%s  c=%s  d=%s  e=%s\n", a, b, c, d, e);	

	printf("%lu\n", (unsigned long)a);
	printf("%d   %lu\n", b-a, (unsigned long)b - (unsigned long)a);



	end = clock();
	printf("time_second=%.5lf\n", (double)(end-sta)/CLOCKS_PER_SEC);
}
