#include<stdio.h>
#include <stdlib.h>
#include <string.h>
 
main()
{
	char str[100];
   	int i, vowels = 0, consonants = 0; 
    char ch; 

   	printf("Enter string: "); 
   	gets(str); 
	    
   	int count[256] = { 0 };
 
    int length = strlen(str);
    for (int i = 0; i < length; i++)
        count[(int)str[i]]++;
 
    char maxChar;
    int maxCount = 0;
    for (int i = 0; i < length; i++) {
        if (count[(int)str[i]] > maxCount) {
            maxCount = count[(int)str[i]];
            maxChar = str[i];
        }
    }
    
    printf("Max occurring character is: %c\n", maxChar);
}
