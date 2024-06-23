#include<stdio.h>
main()
{ 
	int i=0, j=0, number[5], even_count = 0, odd_count = 0;
	
 	for(i=0; i<5; i++)
 	{
  		printf("Enter Number %d:",i+1);
  		scanf("%d",&number[i]);
 	}

 	while(j<5)
 	{
  		if(number[j] % 2 == 0)
		{
			even_count++;
		} 
		else 
		{
			odd_count++;	
		}
		j++;
 	}
 	printf("\nCount of even number is: %d", even_count);
 	printf("\nCount of odd number is: %d", odd_count);
}
