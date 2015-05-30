#include <stdio.h>

#define BLANK ' '

/**/

main()
{
	int c;
	c = getchar();
	while (c != EOF) {
		if (c != BLANK) {
			putchar(c);
			c = getchar();
		}
		if (c == BLANK) {
			putchar(c);
			while (c == BLANK) c = getchar();
		}
	}
}
