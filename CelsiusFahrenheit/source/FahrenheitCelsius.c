#include <stdio.h>

main()
{
	float fahr,celsius;
	int lower,upper,step,no;

	lower = 0;
	upper = 80;
	step = 2;
	no = 0; 

	celsius = lower;
	printf("No   Celisius Fahrenhit\n");
	while (celsius <= upper) {
		no = no + 1;
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%2d %9.0f %9.1f\n", no, celsius, fahr);
		celsius = celsius + step;
	}
}
