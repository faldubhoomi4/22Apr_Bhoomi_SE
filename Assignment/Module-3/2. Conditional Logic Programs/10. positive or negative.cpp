#include<stdio.h>
main()
{
	int m;
	printf("Enter Value of number:");
	scanf("%d",&m);
	if(m>0)
		printf("Value is positive"); 
	else if(m==0)
		printf("Value is zero"); 
	else
		printf("Value is negative"); 
	}
