#include<stdio.h>
main()
{ 
	int rows = 5, count = 1; 
  
    for (int i = 0; i < rows; i++) { 
  
        for (int j = 0; j <= i; j++) { 
            printf("%d ", count);
			count++; 
        } 
        printf("\n"); 
    } 
}
