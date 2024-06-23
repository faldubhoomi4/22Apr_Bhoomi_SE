#include<stdio.h>
main()
{
	float unit,total_amount, surcharge, total_amount_surcharge;
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
	
	surcharge = (total_amount * 18) / 100;
	
	if(total_amount > 800) 
	{
		total_amount_surcharge = total_amount + surcharge;
	} 
	else 
	{
		total_amount_surcharge = total_amount;
	}
	
	if(total_amount_surcharge > 256) 
	{
		printf("Total bill amount is: %f", total_amount_surcharge);
	} 
	else
	{
		printf("Total bill amount is: %f", 256);
	}
}
