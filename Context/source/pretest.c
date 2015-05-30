#include<stdio.h>


main()
{
	struct point {
		int x;
		int y;
	};

	struct {
		int a;
		int b;
		int c;
	} ca, cb, cc;

	struct point pt;
	struct point maxpt = { 400, 300};

	printf("%d %d\n", maxpt.x, maxpt.y);

	struct rect {
		struct point pt1;
		struct point pt2;
	};

	struct rect screen = {{200,100},{50,150}};
	printf("%d %d %d %d\n",screen.pt1.x, screen.pt1.y, screen.pt2.x, screen.pt2.y);
	printf("%p\n", &screen);
	printf("%p\n", &screen.pt1);
	printf("%p\n", &screen.pt1.x);
	printf("%p\n", &screen.pt2);
	printf("%p\n", &screen.pt2.y);
	

	struct point *pp;
	pp = &maxpt;
	printf("origin is (%d,%d)\n", (*pp).x, (*pp).y);
	printf("origin2 is (%d,%d)\n", pp->x, pp->y);
	printf("origin2 is (%p,%p)\n", pp, &(pp->y));
	
	struct point arytest[10];
}

