#include<stdio.h>
main() 
{
	int salary1, salary2, salary3, salary4, salary5, total, average;
	char name1 [50], name2 [50], name3 [50], name4 [50], name5 [50];
	
    printf("Enter employee one name: ");
    scanf("%s",&name1);  
    printf("Enter employee one salary: ");
    scanf("%d",&salary1); 
    printf("Enter employee two name: ");
    scanf("%s",&name2);  
    printf("Enter employee two salary: ");
    scanf("%d",&salary2); 
    printf("Enter employee three name: ");
    scanf("%s",&name3);  
    printf("Enter employee three salary: ");
    scanf("%d",&salary3); 
    printf("Enter employee four name: ");
    scanf("%s",&name4);  
    printf("Enter employee four salary: ");
    scanf("%d",&salary4); 
    printf("Enter employee five name: ");
    scanf("%s",&name5);  
    printf("Enter employee five salary: ");
    scanf("%d",&salary5); 
    
	total = salary1 + salary2 + salary3 + salary4 + salary5;
    average = total / 5;
	printf("Total salary amount is %d\n", total);
	printf("Average salary amount is %d", average);
    }
