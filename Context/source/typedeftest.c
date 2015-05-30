#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define MAXLENGTH 100
#define MAXLINES 1000
typedef struct tnode *Treeptr;
typedef struct tnode {
	char *word;
	int count;
	Treeptr left;
	Treeptr right;
} Treenode;
typedef int (*PFI)(char *, char *);

main(int argc, char *argv[])
{
	typedef int Length;
	Length len, maxlen;
	Length *lengths[MAXLENGTH];
		
	typedef char *String;
	String p, lineptr[MAXLINES], alloc(int);
	int strcmp(String, String);
	p = (String) malloc(100);
}


Treeptr talloc(void)
{
	return (Treeptr) malloc(sizeof(Treenode));
}
