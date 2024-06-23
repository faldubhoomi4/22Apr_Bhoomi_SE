#include<stdio.h>
main()
{
	float tem;
	printf("Enter temperature in centigrade:");
	scanf("%f",&tem);
	if(tem < 0 ) 
	{
		 printf("Freezing weather");
		 
	} 
	else if(tem < 10)
	{
		printf("Very Cold weather");
	}
	else if(tem < 20)
	{
		printf("Cold weather");
	}
	else if(tem < 30)
	{
		printf("Normal in Temp");
	}
	else if(tem < 40)
	{
		printf("Its Hot");
	}
	else 
	{
		printf("Its Very Hot");
	}
	
}
