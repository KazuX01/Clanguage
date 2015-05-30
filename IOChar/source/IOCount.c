#include <stdio.h>

#define BLANK ' '
#define TAB   '\t'
#define PARAGRAPH '\n'

/**/
main()
{
	int intBlankCnt, intTabCnt, intParagraphCnt;
	int c;

	intBlankCnt = 0;
	intTabCnt = 0; 
	intParagraphCnt = 0;

	while ((c = getchar()) != EOF){
		if (c == BLANK) ++intBlankCnt;
		if (c == TAB) ++intTabCnt;
		if (c == PARAGRAPH) ++intParagraphCnt;
	}
	
	printf("BLANK = %d\n", intBlankCnt);
	printf("TAB = %d\n", intTabCnt);
	printf("PARAGRAPH = %d\n", intParagraphCnt);
}
