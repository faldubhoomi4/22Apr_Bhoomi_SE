#include<stdio.h>
main()
{

    int num, max = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
 
    while (num != 0)
    {
        rem = num % 10;
        if(rem > max)
        {
        	max = rem;
		}
        num = num / 10;
    }
    printf("Maximum digit of the number is %d", max);
}
