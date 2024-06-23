#include<stdio.h>
main() 
{
	int minutes, seconds, hours;
	printf("Enter number of minutes ") ;
   	scanf("%d", &minutes) ;
   	seconds = minutes * 60 ;
   	hours = minutes / 60 ;
   	printf("Seconds = %d Hours = %d", seconds, hours) ;
}
