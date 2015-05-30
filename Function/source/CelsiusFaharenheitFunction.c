#include <stdio.h>

/*

*/


int CelsiusFahr(int n);


main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step  = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = CelsiusFahr(fahr);   
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}


int CelsiusFahr(int n)
{
	return 5 * (n - 32) / 9;
}
