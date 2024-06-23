#include<stdio.h>
main()
{
	int a;
    printf("Enter a Number: ");
    scanf("%d", &a);  
     while (a > 0) 
	 {
        int d = a % 10;
        printf("%d (%d)\n", d, d + 48);
        a = a / 10;	
    }
}
