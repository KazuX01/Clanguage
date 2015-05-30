#include <stdio.h>
#define BUFSIZE 100
static char buf[BUFSIZE];
static int bufp = 0;

int getchA(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}


void ungetchA(int c)
{
	if(bufp >= BUFSIZE)
		printf("ungetchA: too many characters\n");
	else 
		buf[bufp++] = c;
}

