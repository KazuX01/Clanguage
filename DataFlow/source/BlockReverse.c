#include<stdio.h>
#include<string.h>


void reverseA(char s[]);

main()
{

	char A[] = "kazunori";
	reverseA(A);	
	printf("%s\n",A);

}


void reverseA(char s[])
{
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--){
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

