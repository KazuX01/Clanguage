#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int c, i, l, cnt, buf, state;
	int Array[10][9];

	state = OUT;
	cnt = 0;
	for (i = 0; i < 10; ++i) 
		for (l = 0; l < 9; ++l) Array[i][l] = ' ';
	for (l = 0; l < 9; ++l) Array[1][l] = l + '1';
	for (l = 0; l < 9; ++l) Array[0][l] = '0';

	while ((c = getchar()) != EOF) {
		if (state == IN) {
			if (c == ' ' || c == '\n' || c == '\t') {
				buf = ++Array[0][cnt-1] - 47;
				Array[buf][cnt-1] = '@';
				cnt = 0;
				state = OUT;
			}else {
				++cnt;
			}
		}else {
			if (c != ' ' && c != '\n' && c != '\t') {
				state = IN;
				++cnt;
			}
		}
	}

	for (i = 9; i > 0; --i) {
		for (l = 0; l < 9; ++l) printf("%c", Array[i][l]);
		printf("\n");
	}
}
