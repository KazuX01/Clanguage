#include <stdio.h>

main()
{
	char c = EOF;
	char d = 0xFF;
	int e = EOF;
	int f = 0xff;

	printf("char EOF=%x\n",c);
	printf("char cha=%x\n",d);
	printf("int  EOF=%x\n",e);
	printf("int  cha=%x\n",f);

	return 0;
}
