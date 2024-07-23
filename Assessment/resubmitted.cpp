#include <stdio.h>

void getMatrixElements(int matrix[2][2]) {
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         printf("Enter elements: ");
         scanf("%d", &matrix[i][j]);
      }
   }
}

void displayMatrix(int result[2][2]) {
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         printf("%d  ", result[i][j]);
         if (j == 1)
         {
            printf("\n");
         }
      }
   }
}

int main() {
	int row1 = 2, column1 = 2, row2 = 2, column2 = 2;
   	int firstMatrix[2][2], secondMatrix[2][2], resultMatrix[2][2];
   	
   // Initializing elements of multiplication matrix to 0.
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         resultMatrix[i][j] = 0;
      }
   }

	printf("\n--------------------Matrix: 1-----------------------\n");
   	
   	getMatrixElements(firstMatrix);
   	displayMatrix(firstMatrix);

	printf("\n--------------------Matrix: 2-----------------------\n");

   	getMatrixElements(secondMatrix);
   	displayMatrix(secondMatrix);

   	
   	for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 2; j++) {
         for (int k = 0; k < 2; k++) {
            resultMatrix[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
         }
      }
   }

	printf("\n---------Result : Multiplication Matrix-----------\n");

   	printf("\nOutput Multiplication Matrix:\n");
   	displayMatrix(resultMatrix);

    return 0;
}
