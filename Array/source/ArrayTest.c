#include <stdio.h>

main()
{
	int a = 128;
	int b[5];  
	int c = 20;
	printf("&a = %p, &b = %p, &c = %p\n", &a, &b[0], &c);
	b[-2] = 555;
	printf("a = %d, c = %d\n", a, c);
	printf("a = %d, c = %d\n", a, c);
}
