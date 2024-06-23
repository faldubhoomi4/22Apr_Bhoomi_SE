#include <stdio.h>              
#include<conio.h>
main()                      
{
	int rows = 2, columns = 2;  
    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns], difference[rows][columns], mul[rows][columns]; 
 
    printf("Enter the elements of the first matrix: \n"); 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            scanf("%d", &matrix1[i][j]); 
        } 
    } 
 
    printf("Enter the elements of the second matrix: \n"); 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            scanf("%d", &matrix2[i][j]); 
        } 
    } 
 
    // Finding the sum of the matrices 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            sum[i][j] = matrix1[i][j] + matrix2[i][j]; 
        } 
    } 
 
    // Finding the difference of the matrices 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            difference[i][j] = matrix1[i][j] - matrix2[i][j]; 
        } 
    } 
    
    for (int i = 0; i < rows; ++i) {
      for (int j = 0; j < columns; ++j) {
      	 mul[i][j]=0;   
         for (int k = 0; k < columns; ++k) {
            mul[i][j] += matrix1[i][k] * matrix2[k][j];
         }
      }
   }
 
    printf("The sum of the matrices is: \n"); 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            printf("%d ", sum[i][j]); 
        } 
        printf("\n"); 
    } 
 
    printf("The difference of the matrices is: \n"); 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) { 
            printf("%d ", difference[i][j]); 
        } 
        printf("\n"); 
    } 
    
    printf("The Multiplication of the matrices is:\n");
		for(int i=0;i<rows;i++)
		{
			for(int j=0;j<columns;j++)
				printf("%d ", mul[i][j]);
			printf("\n");
		}
}
