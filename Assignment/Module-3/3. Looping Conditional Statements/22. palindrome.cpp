#include<stdio.h>
main()
{ 
	int i=0, j=0, number[3], reversedNum = 0, originalNum;
 	for(i=0; i<3; i++)
 	{
  		printf("Enter Number %d: ",i+1);
  		scanf("%d",&number[i]);
 	}
 	
 	while(j < 3)
 	{
 		reversedNum = 0;
    	originalNum = number[j];
    
    	while (number[j] != 0) {
        	int remainder = number[j] % 10; 
        	reversedNum = reversedNum * 10 + remainder; 
        	number[j] /= 10;
    	}

    	if (originalNum == reversedNum) {
        	printf("\n%d is a palindrome.", originalNum);
    	} else {
        	printf("\n%d is not a palindrome.", originalNum);
    	}
    	
    	j++;
	}
}	
