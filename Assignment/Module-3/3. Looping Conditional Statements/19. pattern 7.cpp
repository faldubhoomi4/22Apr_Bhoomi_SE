#include<stdio.h>
main()
{ 
	int i, j, N, size = 10;
    int box[size][size];
    int left, top;

    left = 0;
    top  = size - 1;
    N    = 1;

    for(i=1; i<=size/2; i++, left++, top--)
    {
        for(j=left; j<=top; j++, N++)
        {
            box[left][j] = N;
        }

        for(j=left+1; j<=top; j++, N++)
        {
            box[j][top] = N;
        }

        for(j=top-1; j>=left; j--, N++)
        {
            box[top][j] = N;
        }

        for(j=top-1; j>=left+1; j--, N++)
        {
            box[j][left] = N;
        }
    }

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            printf("%-5d", box[i][j]);
        }
        printf("\n");
    }
}	
