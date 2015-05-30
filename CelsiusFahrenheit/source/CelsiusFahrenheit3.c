#include <stdio.h>

main()
{
	float fahr,celsius;
	int lower,upper,step,no;

	lower = 0;
	upper = 300;
	step = 20;
	no = 0; 

	fahr = lower;
	printf("No Fahrenhit   Celisus\n");
	while (fahr <= upper) {
		no = no + 1;
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%2d %9.0f %9.1f\n", no, fahr, celsius);
		fahr = fahr + step;
	}
}
