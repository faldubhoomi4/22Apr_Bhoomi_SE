#include<stdio.h>
main()
{
	int month_number; 

   	printf("Input Month No : ");
   	scanf("%d",&month_number);

   	switch(month_number)
   	{
		case 2:
	       printf("The 2nd month have 28 days in non leap year and in leap year month have 29 days.");
	       break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
	       printf("Month have 31 days."); 
	       break;
		case 4:
		case 6:
		case 9:
		case 11:
	       printf("Month have 30 days.");
	       break;
		default:
	       printf("Invalid Month number.");  
	       break;
      }
}
