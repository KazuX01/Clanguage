#include<stdio.h>


main()
{
	char *s = "abcd";
	printf("%s\n",s);
	*s = 'z';
	printf("%s\n",s);
}
