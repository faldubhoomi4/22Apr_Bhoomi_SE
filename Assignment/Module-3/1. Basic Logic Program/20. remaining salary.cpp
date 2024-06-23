#include<stdio.h>
main() 
{
	int s,l,i,f;
    printf("Enter a monthly salary amount: ");
    scanf("%d",&s);  
    l = (s*10)/100;
    i = (s*10)/100;
    f = s-l-i;
    printf("Remaining salary amount is %d",f);
    }
