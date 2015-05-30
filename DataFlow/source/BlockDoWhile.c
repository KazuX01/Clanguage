#include <stdio.h>
#include <string.h>
#include <time.h>

void itoaA(int n, char s[]);
void reverseA(char s[]);

main()
{

	clock_t start,end;
	start = clock();
	int t;
	for (t = 0; t < 5000000; t++) ;
	int i = -5634;
	char s[8];
	itoaA(i, s);
	printf("%s\n",s);
	end = clock();
	printf("%.3f\n", (double)(end-start)/CLOCKS_PER_SEC);
}


void itoaA(int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)
		n = -n;
	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
	int z;
	for (z = 0; z <= i; z++)
		printf("%d = %c\n", z, s[z]);
	reverseA(s);
} 

void reverseA(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
	printf("strlen = %d\n", strlen(s));
	for (i = 0, j = strlen(s); i < j; i++)
		printf("%d = %c\n", i, s[i]);
}

