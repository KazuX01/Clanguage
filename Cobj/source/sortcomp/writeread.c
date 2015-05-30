#include<string.h>
#include<stdio.h>
#define MAXLEN 1000 
int getlineA(char *, int);
char *allocA(int);

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while ((len = getlineA(line, MAXLEN)) > 0)
		if (nlines >= maxlines || (p = allocA(len)) == NULL)
			return -1; 
		else {
			line[len-1]='\0';
			strcpy(p,line);
			lineptr[nlines++] = p;
		}
	printf("line=%d\n",nlines);
	return nlines;
}

void writelines(char *lineptr[], int nlines)
{
	int i;
	for(i = 0; i < nlines; i++)
		printf("%s\n",lineptr[i]);
}
