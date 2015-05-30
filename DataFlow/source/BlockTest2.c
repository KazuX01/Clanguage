#include<stdio.h>

int binsearch(int x, int v[], int n);

main()
{
	int x,n,i;
	n = 10;
	int v[n];
	for(i=0;i<10;++i)
		v[i] = i + 3;
	x = 8;
	printf("return = %d\n",binsearch(x,v,n));
}



int binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high){
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid -1;
		else if ( x > v[mid])
			low = mid + 1;
		else
			return mid;
	}
	return -1;
}
