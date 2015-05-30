#include<stdio.h>


int func(int a)
{
	return a * 2;
}


int main(int argc, char *argv[])
{

	int a = 6;
	int arg[func(7)];
	printf("%d\n",sizeof(arg));

}
