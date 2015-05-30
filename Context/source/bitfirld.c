#include <stdio.h>

#define KEYWORD 01
#define EXTERNAL 02
#define STATIC 04

enum { KEYWORDA = 01, EXTERNALA = 02, STATICA = 04 };

struct bitfield {
	unsigned short int is_keyword : 1;
	unsigned short int is_extern  : 1;
	unsigned short int is_static  : 1;
} flagfirld;



main()
{
	int flags;
	flags |= EXTERNAL | STATIC;
	flags &= ~(EXTERNAL | STATIC);
	if ((flags & (EXTERNAL | STATIC)) == 0)
		;
	printf("%d\n", sizeof(struct bitfield));
	flagfirld.is_keyword = 1;
	flagfirld.is_extern = 1;
	flagfirld.is_static = 1;
	
}
