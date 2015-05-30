#include<stdio.h>

int main()
{
	char yn;
	printf("what? y/n > ");
	scanf("%[yn]" ,&yn);

	printf("input = %c\n", yn);
	return 0;
}
