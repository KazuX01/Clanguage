#include <stdio.h>
#include <time.h>
#define MAXLINE 1000

int getlineA(char line[], int max);
int strindex(char source[], char searchfor[]);

char pattern[] = "ould";

main()
{
	clock_t start, end;
	start = clock();
	char line[MAXLINE];
	int found = 0;

	while (getlineA(line, MAXLINE) > 0)
		if (strindex(line, pattern) >= 0) {
			printf("%s", line);
			found++;
		}
	end = clock();
	printf("excute_job_time = %.3f\n", (double)(end-start)/CLOCKS_PER_SEC);
	return found;
}


int getlineA(char s[], int lim)
{
	int c, i;
	
	i = 0; 
	while (--lim > 0 && (c=getchar()) != EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

int strindex(char s[], char t[])
{
	int i, j, k;
	
	for (i = 0; s[i] != '\0'; i++) {
		for (j=i , k=0; t[k]!='\0' && s[j]==t[k]; j++, k++)
			;
		if (k > 0 && t[k] == '\0')
			return i;
	}
	return -1;
}

