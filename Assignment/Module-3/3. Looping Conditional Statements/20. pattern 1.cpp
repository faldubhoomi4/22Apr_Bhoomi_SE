#include<stdio.h>
main()
{ 
	int rows = 5, cols = 10, i, j, k = 1;

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++, k++)
        {
            printf("%-3d", k);
        }
        printf("\n");
    }

}	
