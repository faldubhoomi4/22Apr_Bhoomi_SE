#include <stdio.h>

// function to get matrix elements entered by the user
void getMatrixElements(int matrix[2][2], int row, int column) {
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter elements: ");
         scanf("%d", &matrix[i][j]);
      }
   }
}

// function to multiply two matrices
void multiplyMatrices(int first[2][2],
                      int second[2][2],
                      int result[2][2],
                      int r1, int c1, int r2, int c2) {

   // Initializing elements of matrix mult to 0.
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }

   // Multiplying first and second matrices and storing it in result
   for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}

// function to display the matrix
void display(int result[2][2], int row, int column) {
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
}

main() {
	int r1 = 2, c1 = 2, r2 = 2, c2 = 2;
   	int first[2][2], second[2][2], result[2][2];

	printf("\n--------------------Matrix: 1-----------------------\n");
   	// get elements of the first matrix
   	getMatrixElements(first, r1, c1);
   	display(first, r1, c2);

	printf("\n--------------------Matrix: 2-----------------------\n");
   	// get elements of the second matrix
   	getMatrixElements(second, r2, c2);
   	display(second, r1, c2);

   	// multiply two matrices.
   	multiplyMatrices(first, second, result, r1, c1, r2, c2);

	printf("\n---------Result : Multiplication Matrix-----------\n");
   	// display the result
   	printf("\nOutput Matrix:\n");
   	display(result, r1, c2);

}
