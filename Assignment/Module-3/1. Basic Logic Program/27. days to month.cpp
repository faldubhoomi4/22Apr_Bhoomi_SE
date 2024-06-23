#include<stdio.h>
main() 
{
	int months, days ;
	printf("Enter number of days ") ;
   	scanf("%d", &days) ;
   	months = days / 30 ;
   	days = days % 30 ;
   	printf("Months = %d Remaining Days = %d", months, days) ;
}
