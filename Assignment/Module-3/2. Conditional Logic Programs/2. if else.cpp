#include<stdio.h>
main()
{
	int m,n;
	printf("Enter Value of number:");
	scanf("%d",&m);
	if(m>0)
	n=1; 
	else if(m==0)
	n=0;
	else
	n=-1;
	printf("Value Of n:%d",n);
	}
