#include<stdio.h>
int strlen(char *);

main()
{
	printf("%d\n",strlen("heelo"));
}

int strlen(char *s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}
