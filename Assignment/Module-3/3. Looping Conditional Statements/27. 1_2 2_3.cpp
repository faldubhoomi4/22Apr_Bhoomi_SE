#include<stdio.h>
main()
{ 
	int i, num;
	float sum = 0;
	
	printf("Enter number : "); 
    scanf("%d", &num); 

   	 for (int i = 1; i <= num; i++) { 
        if (i % 2 == 0) { 
            sum -= (float)i / (i + 1); 
        } else { 
            sum += (float)i / (i + 1); 
        } 
    } 
 

    printf("\nSum is %f", sum); 
}	
