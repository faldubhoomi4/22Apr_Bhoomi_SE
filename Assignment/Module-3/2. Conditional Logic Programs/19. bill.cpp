#include<stdio.h>
main()
{
	float unit,total_amount ;
	printf("Enter units value:");
	scanf("%f",&unit);
	if(unit < 350 ) 
	{
		total_amount = unit * 1.2; 	 
	} 
	else if(unit <600)
	{
		total_amount = unit * 1.5; 
	}
	else if(unit < 800)
	{
		total_amount = unit * 1.8; 
	}
	else 
	{
		total_amount = unit * 2;
	}
		printf("Total bill amount is: %f", total_amount);
}
