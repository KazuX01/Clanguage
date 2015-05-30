#include<stdio.h>


void (*f)(void);


void funcerr()
{
	int i;
	for(i=0; i<10; i++)
		printf("super err\n"); 
	exit(1);
}


void funca(int *argp){
	printf("argP=%p   argc=%d\n",&argp,*argp);
	int i,*p = &argp;
	for(i = 0; i < 1; i++){
		printf("aaa=%p !!!= %p\n",--p,*p);
		*p=f;
	}
}


int func(int arg)
{

	funca(&arg);
	return 0;
}



main()
{
	f = funcerr;

	printf("funcerr=%p\n",f);

	printf("resutlt = %d\n",func(4));
	printf("ended\n");

}	
