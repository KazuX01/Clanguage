#include <stdio.h>
#include <string.h>
#define MAXLINE 100


main() 
{
	double sum, atofA(char []);
	char line[MAXLINE];
	int getlineA(char line[], int max);	
	sum = 0;
	while (getlineA(line, MAXLINE) > 0)
		printf("\t%g\n", sum += atofA(line));
	return 0;
}


int getlineA(char s[], int lim)
{
	int c, i;

	i= 0;
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}	
