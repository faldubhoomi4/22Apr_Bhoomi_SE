#include<stdio.h>
main()
{ 
	int i=0, number[10], even_count = 0, even_sum = 0, odd_count = 0, odd_sum = 0;
 	for(i=0; i<10; i++)
 	{
  		printf("Enter Number %d:",i+1);
  		scanf("%d",&number[i]);
 	}

 	for(i=0; i<10; i++)
 	{
  		if(number[i] % 2 == 0)
		{
			even_count++;
			even_sum += number[i];
		} 
		else 
		{
			odd_count++;
			odd_sum += number[i];	
		}
 	}
 	printf("\nCount of even number is: %d", even_count);
 	printf("\nCount of odd number is: %d", odd_count);
 	printf("\nSum of even number is: %d", even_sum);
 	printf("\nSun of odd number is: %d", odd_sum);
}

