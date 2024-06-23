#include<stdio.h>
main()
{ 
	int count, i = 1;
	float num;
	
	printf("Enter count : "); 
    scanf("%d", &count); 

    while(i <= count)
    {
    	if(i == 1) 
		{
			num = 1;	
		}
    	else if(i % 2 == 0) 
    	{
    		num = 2 * (i - 1);
		} 
		else
		{
			num = 1.5 * (i - 1);
		}
		printf("%.0f ", num);
		i++;
	}
}	
