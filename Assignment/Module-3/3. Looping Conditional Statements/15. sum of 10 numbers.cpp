#include<stdio.h>
main()
{
	int i=0, j=0, number[10], sum;
 	for(i=0; i<10; i++)
 	{
  		printf("Enter Number %d: ",i+1);
  		scanf("%d",&number[i]);
 	}
 	
 	while(j < 10)
 	{
 		sum += number[j];
 		j++;
	}
 	
 	printf("Sum : %d",sum);
}
