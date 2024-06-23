#include<stdio.h>
main()
{ 
	int i=0, number[5];
 	for(i=0; i<5; i++)
 	{
  		printf("Enter Number %d:",i+1);
  		scanf("%d",&number[i]);
 	}

 	for(i=0; i<5; i++)
 	{
  		printf("\nNumber %d is: %d", i+1, number[i]);
 	}
}

