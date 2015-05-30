void swapA(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;
}


int strlenA(char *s)
{
	int n;
	for (n = 0; *s != '\0'; s++)
		n++;
	return n;
}


void strcpyA(char *s, char *t)
{
	while(*s++ = *t++)
		;
}


int strcmpA(char *s, char *t)
{
	for( ; *s == *t; s++,t++)
		if(*s=='\0')
			return 0;
	return *s - *t;
}


int getlineA(char s[], int lim)
{
	int c, i;
	for (i=0; i<lim-1 && (c=getchar())!=-1 && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}


void swapB(char *v[], int i, int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
