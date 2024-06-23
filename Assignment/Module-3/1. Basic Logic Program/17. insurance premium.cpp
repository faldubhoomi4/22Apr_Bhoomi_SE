#include<stdio.h>
main() 
{
	int s,p,v;
    printf("Enter an anual salary amount: ");
    scanf("%d",&s);  
    printf("Enter an insuance premium %: ");
    scanf("%d",&p); 
    v=(s*p)/100;
    printf("Insuance premium amount is %d",v);
    }
