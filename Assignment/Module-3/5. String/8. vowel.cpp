#include<stdio.h>
main()
{
	char str[100];
   	int i, vowels = 0, consonants = 0; 
    char ch; 

   	printf("Enter string: "); 
   	gets(str); 
	    
   	for (i = 0; str[i] != '\0'; i++) { 
 
        ch = str[i]; 
 
        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U') 
            vowels++; 
 
        else if (ch == ' ') 
            continue; 
 
        else
            consonants++; 
    } 
 
    printf("\nVowels: %d", vowels); 
    printf("\nConsonants: %d", consonants); 
}
