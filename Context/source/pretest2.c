#include <stdio.h>

struct point {
	int x;
	int y;
	int z;
};

main(){

	struct point a[]  = {
		{10, 2, 3},
		{8, 6, 2},
		{9, 7, 5},
		{5, 10, 9},
		{4, 4, 4}
	};
	int i;
	printf("Arraysize = %d\n", sizeof a);
	printf("Srtuctsize = %d\n", sizeof(struct point));
	i = sizeof a / sizeof(struct point);
	printf("%i\n",i);
	i = sizeof a / sizeof a[0];
	printf("%i\n",i);
}
