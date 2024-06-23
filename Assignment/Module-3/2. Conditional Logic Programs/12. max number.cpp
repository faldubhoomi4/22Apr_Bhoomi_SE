#include<stdio.h>
main()
{ 

    int n1, n2, n3, max;
    printf("Enter value of number 1: ");
    scanf("%d", &n1);
    printf("Enter value of number 2: ");
    scanf("%d", &n2); 
    printf("Enter value of number 3: ");
    scanf("%d", &n3);
     
    max = ( n1 > n2 )?(( n1 > n3 )? n1 : n3 ):(( n2 > n3 )? n2 : n3);
     
    printf("Maximum number is %d.", max); 
}
