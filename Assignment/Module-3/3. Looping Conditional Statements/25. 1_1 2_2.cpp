#include<stdio.h>
main()
{ 
	int i, num, sum = 0;

    printf("Enter number : "); 
    scanf("%d", &num); 

    for (i = 1; i <= num; i++) { 
    	sum += (i * i);
    }

    printf("\nSum is %d", sum); 
}	
