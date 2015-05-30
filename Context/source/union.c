#include <string.h>
#include <stdio.h>

union u_tag {
	int ival;
	fload fval;
	char *sval;
} u;

struct {
	char *name;
	int flags;
	int utype;
	unionA {
		int ival;
	 	float fval;
		char *sval;
	} u;
} symtab[NSYM];

main()
{
	if (utype == INT)
		printf("%d\n", u.ival);
	else if (utype == FLOAT)
		printf("%f\n", u.fval);
	else if (utype == STING)
		printf("%s\n", u.sval);
	else
		printf("bad type %d in utype\n", utype);

	*symtab[i].u.sval;
	symtab[i].u.sval[0];
}

