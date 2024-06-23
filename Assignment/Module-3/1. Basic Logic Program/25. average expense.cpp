#include<stdio.h>
main() 
{
	int expense1, expense2, expense3, expense4, expense5, total, average;
	
    printf("Enter employee one expense: ");
    scanf("%d",&expense1); 
    printf("Enter employee two expense: ");
    scanf("%d",&expense2); 
    printf("Enter employee three expense: ");
    scanf("%d",&expense3); 
    printf("Enter employee four expense: ");
    scanf("%d",&expense4); 
    printf("Enter employee five expense: ");
    scanf("%d",&expense5); 
    
	total = expense1 + expense2 + expense3 + expense4 + expense5;
    average = total / 5;
	printf("Average expense amount is %d", average);
    }
