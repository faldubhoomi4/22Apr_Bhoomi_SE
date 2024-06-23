#include<stdio.h>
main()
{
	int n, i;
    printf ("Enter a number to generate the table : ");  
    scanf ("%d", &n); 
      
    printf ("Table of %d", n);  
     
    for ( i = 1; i <= 10; i++)  
    {  
        printf ("\n %d * %d = %d", n, i, (n*i));  
	}
}

