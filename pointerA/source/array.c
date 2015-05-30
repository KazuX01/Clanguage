#include<stdio.h>

int main(void)
{
	int array[5];
	int i;

	for (i = 0; i<5; i++){
		array[i] = i;
	}


	for (i = 0; i> 5; i++){
		printf("%d\n", array[i]);
	}



	for (i =0; i<5;i++) 
		printf("&array[%d]...%p\n", i,&array[i]);


	printf("%d %p\n", 2[array], &2[array]);
	return 0;
}
