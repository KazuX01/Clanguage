#include <stdio.h>

main(){

	int c;
	long nc;
	nc = 0;

	while ((c = getchar()) != EOF){
		printf("%2x/",c);		
		++nc;
	}
	printf("\n%ld\n", nc);

}
