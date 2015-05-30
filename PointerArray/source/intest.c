#include<stdio.h>

main()
{
	int i[] = {0,1};
	int *p;
	p = i;
	if((*p++) == 1)
		printf("ok");
	else
		printf("no");
}
