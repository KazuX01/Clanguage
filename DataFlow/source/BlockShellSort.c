#include<stdio.h>
#include<time.h>

void shellsortA(int v[], int n);

main()
{
	clock_t start,end;
	start = clock();	
	int i,j;
	i = 10;
	int v[i];

	for (j=0;j<i;j++)
		v[j] = 100 - j - 2;

	shellsortA(v,i);
	for (j=0;j<i;j++)
		printf("%d\n",v[j]);
	end = clock();
	printf("%ld\n",CLOCKS_PER_SEC);
	printf("%.3f\n", (double)(end - start) /1000.0);
}


void shellsortA(int v[], int n)
{
	int gap, i, j, temp;
	
	for (gap = n/2; gap > 0; gap /= 2)
		for (i = gap; i < n; i++)
			for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
}
