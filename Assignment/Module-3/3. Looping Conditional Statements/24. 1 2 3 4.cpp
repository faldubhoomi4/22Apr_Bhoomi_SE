#include<stdio.h>
main()
{ 
	int i, num, sum = 0;

    printf("Enter number : "); 
    scanf("%d", &num); 

    for (i = 1; i <= num; i++) { 
    	sum += i; 
    }

    printf("\nThe Sum of numbers upto %d is %d", num, sum); 
}	
