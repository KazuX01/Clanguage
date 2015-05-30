/*
void strcpyA(char *s, char *t)
{
	int i = 0;
	while((s[i] = t[i]) != '\0')
		i++;
}
void strcpyP(char *s, char *t)
{
	while((*s = *t) != '\0'){
		s++;
		t++;
	}
}
void strcpyPC(char *s, char *t)
{
	while((*s++ = *t++) != '\0')
		;
}
*/



void strcpyA(char *s, char *t)
{
	while(*s++ = *t++)
		;
}
