#include<stdio.h>
#include<time.h>


int fncA(int a);
char fncB(char b, int);



main()
{



	void *f;
	f = fncA;
	printf("fncA=%d    address=%p\n", (*(int (*)(int))f)(7), f);
	f = fncB;
	printf("fncB=%c    address=%p\n", (*(char (*)(char,int))f)('a',4),f);
}


int fncA(int a){
	return a+5;
}

char fncB(char b, int a){
	return b + (char)a; 
}
