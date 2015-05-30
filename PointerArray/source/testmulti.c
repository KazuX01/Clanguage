#include <stdio.h>

main()
{

	int (*a)[5];

	printf("%p\n",a);
	printf("%p\n",&a[0][1]);
	printf("%p\n",a + 1);

}
