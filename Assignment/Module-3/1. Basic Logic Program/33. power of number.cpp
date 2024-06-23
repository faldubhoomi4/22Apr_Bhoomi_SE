#include<stdio.h>
main() 
{
	int num, power_one, power_two, power_three;
	printf("Enter number value ");
   	scanf("%d", &num);
   	power_one = num;
   	power_two = num * num;
   	power_three = num * num * num;
   	printf("First power of given number is %d\n", power_one);
   	printf("Second power of given number is %d\n", power_two);
   	printf("Thirst power of given number is %d\n", power_three);
}
