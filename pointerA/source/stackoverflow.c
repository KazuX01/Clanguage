#include<stdio.h>

void hello(void)
{
	fprintf(stderr, "hello!\n");
}

void func(void)
{
	void *buf[10],*bufp;
	bufp=&buf;
	static int i;
	/*	
	printf("bufpaddress=%p\n" ,&bufp);
	printf("bufaddress=%p\n", &buf[0]);
	printf("bufaddress=%p\n", &buf[9]);
	*/	
	for(i=0;i<100; i++,bufp+=4){
		buf[i]=hello;
		printf("%d  address=%p value=%p\n",i, bufp, *(int *)bufp);
	}
}

int main(void)
{
	int buf[1000];
	func();
	return 0;
}
