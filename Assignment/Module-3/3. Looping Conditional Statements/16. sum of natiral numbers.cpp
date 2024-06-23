#include<stdio.h>
main()
{
	int j=1, number, sum = 0;
 	
  	printf("Enter Number : ");
  	scanf("%d",&number);
 	
 	while(j <= number)
 	{
 		sum += j;
 		j++;
	}
 	
 	printf("Sum : %d",sum);
}
