#include <stdio.h>

main()
{
	int c;
	printf("%x\nblnEOF = %1d\n", (c = getchar()), c != EOF); 
}
