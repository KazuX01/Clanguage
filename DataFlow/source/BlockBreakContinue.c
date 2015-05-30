#include <stdio.h>
#include <string.h>

int trim(char s[]);

main()
{
	
	int i,j,a[5];
	for (i = 0;i <= 6;i++)
		a[i] = i;
	for (i = 0;i <= 6;i++)
		printf("%d\n",a[i]);
	char s[10] = "kazunia   ";
	for (i = 0, j = strlen(s); i <= j; i++)
		if(s[i] == '\0')
			printf("%d = %s\n", i, "\\0");
		else 
			printf("%d = %c\n", i ,s[i]);
	printf("%s\n", s);
	printf("%d\n", trim(s));
	printf("%s\n", s);
}



int trim(char s[])
{
	int n;
	for (n = strlen(s)-1; n >= 0; n--)
		if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
			break;
	s[n+1] = '\0';
	return n;
}  
