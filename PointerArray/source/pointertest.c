#include<stdio.h>

main()
{
	int x = 1, y = 2, z[10];
	int *ip, *iq;
	double *dp, atof(char *);

	ip = &x;
	printf("Address_%p = Value_%d\n", ip, *ip);
	y = *ip;
	printf("Address_%p = Value_%d\n", &y, y);
	*ip = 0;
	printf("Address_%p = Value_%d\n", &x, x);
	*ip = *ip + 10;
	printf("Address_%p = Value_%d\n", &x, x);
	y = *ip + 1;
	printf("Address_%p = Value_%d\n", &y, y);
	(*ip)++;
	printf("Address_%p = Value_%d\n", &x, x);
	iq = ip;
	printf("Address_%p = Value_%d\n", iq, *iq);
	ip = &z[0];
	*ip = 5;
	printf("Address_%p = value_%d\n", ip, *ip);
	printf("Address_%p = value_%d\n", &z[0], z[0]);
	ip[1] = 6;
	printf("Address_%p = value_%d\n", &z[1], z[1]);
	ip = ip + 1;
	*ip = 8;
	printf("Address_%p = value_%d\n", ip, *ip);
	printf("Address_%p = value_%d\n", &z[1], z[1]);
	*(z+1) = 10;
	printf("Address_%p = value_%d\n", z+1, *(z+1));
}	
