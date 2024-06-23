#include<stdio.h>
main()
{
	char s1[1000], s2[1000];
   	int i;

   	printf("Enter string: "); 
   	gets(s1); 
	    
   	for(i=0;s1[i]!='\0';i++) { 
      s2[i]=s1[i]; 
   	} 
   	s2[i]='\0'; 
   
   	printf("original string s1 is '%s'\n",s1); 
   	printf("copied string s2 is '%s'",s2); 
}
