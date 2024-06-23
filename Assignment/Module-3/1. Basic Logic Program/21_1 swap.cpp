#include<stdio.h>
main() 
{
	int num1, num2, temp_num;
    printf("Enter number one: ");
    scanf("%d",&num1);  
    printf("Enter number two: ");
    scanf("%d",&num2); 
    temp_num = num1;
    num1 = num2;
    num2 = temp_num;
	printf("Number one is %d\nNumber two is %d",num1, num2);
    }
