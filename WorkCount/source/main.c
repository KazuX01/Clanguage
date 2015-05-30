#include<stdio.h>
#include<stdlib.h>
#include "get_word.h"
#include "word_manage.h"
#include<time.h>
#define WORD_LEN_MAX (1024)

int main(int argc, char **argv)
{
	clock_t sta=clock(),end;
	char buf[WORD_LEN_MAX];
	FILE *fp;

	if(argc == 1)
		fp = stdin;
	else { 
		fp = fopen(argv[1],"r");
		if (fp ==NULL) {
			fprintf(stderr,"%s:%s can not open.\n", argv[0], argv[1]);
			exit(1);
		}
	}

	word_initialize();

	while(get_word(buf,WORD_LEN_MAX,fp) != EOF) 
		add_word(buf);

	dump_word(stdout);
	word_finalize();
	
	end=clock();
	fprintf(stdout,"Excute_time_sec = %.8f\n",(double)(end-sta)/CLOCKS_PER_SEC);	
	return 0;
}
