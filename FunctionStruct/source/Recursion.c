#include <stdio.h>
#include <time.h>

void printd(int);

main()
{
	clock_t start, end;
	start = clock();
	printd(659);
	end = clock();
	double i;
	i = (double)(end - start) / CLOCKS_PER_SEC;	      
	printf("\t%g\n",i);
}


void printd(int n)
{
	if (n < 0) {
		putchar('-');
		n = -n;
	}
	if (n / 10)
		printd(n /10);
	putchar(n % 10 + '0');
}
