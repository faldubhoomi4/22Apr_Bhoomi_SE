#include<stdio.h>
main()
{ 
	int rows = 5, count = 0; 
  
    for (int i = 0; i < rows; i++) { 
  
        for (int j = 0; j <= i; j++) { 
            printf("%c ", 'A' + count);
			count++; 
        } 
        printf("\n"); 
    } 
}
