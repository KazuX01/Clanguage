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


void qsortI(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1 ; i <= right ; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsortI(v, left, last-1);
	qsortI(v, last+1, right);
}


void swap(int v[], int i, int j)
{
	int temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}


void qsortA(char *v[], int left, int right)
{
	int i, last;
	void swapB(char *v[], int i, int j);

	if(left >= right)
		return;
	swapB(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swapB(v, ++last, i);
	swapB(v, left, last);
	qsortA(v, left, last-1);
	qsortA(v, last+1, right);
}


void swapB(char *v[], int i, int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
