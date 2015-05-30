#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define HASHSIZE 101
#define IN 1
struct nlist {
	struct nlist *next;
	char *name;
	char *defn;
};
static struct nlist *hashtab[HASHSIZE];

unsigned hash(char *s)
{
	unsigned hashval;
	
	for(hashval = 0; *s != '\0'; s++)
		hashval = *s + 31 * hashval;
	return hashval % HASHSIZE;
}


struct nlist *lookup(char *s)
{
	struct nlist *np;

	for (np = hashtab[hash(s)]; np != NULL; np = np->next)
		if (strcmp(s, np->name) == 0)
			return np;
	return NULL;
}


char *strdupA(char *);
struct nlist *install(char*name, char *defn)
{
	struct nlist *np;
	unsigned hashval;

	if ((np = lookup(name)) == NULL) {
		np = (struct nlist *) malloc(sizeof(*np));
		if (np == NULL || (np->name = strdupA(name)) == NULL)
			return NULL;
		hashval = hash(name);
		hashtab[hashval] = np;
	} else 
		free((void *) np->defn);
	if ((np->defn = strdup(defn)) == NULL)
		return NULL;
	return  np;
}


char *strdupA(char *s)
{
	char *p;
	p = (char *) malloc(strlen(s)+1);
	if (p !=NULL)
		strcpy(p, s);
	return p;
}
