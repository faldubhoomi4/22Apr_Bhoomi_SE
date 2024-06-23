#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char words[100][100], small[100], large[100];  
    int i = 0, j = 0, k, length;  
    
    printf("Input the first string : ");
    fgets(str, sizeof str, stdin);
      
    for(k=0; str[k]!='\0'; k++){  
           
        if(str[k] != ' ' && str[k] != '\0'){  
            words[i][j++] = str[k];  
        }  
        else{  
            words[i][j] = '\0';  
            i++;   
            j = 0;  
        }  
    }  
      
    length = i + 1;  
       
    strcpy(small, words[0]);  
    strcpy(large, words[0]);  
      
    for(k = 0; k < length; k++){  
            
        if(strlen(small) > strlen(words[k])){  
            strcpy(small, words[k]);  
        }  

        if(strlen(large) < strlen(words[k]))  
            strcpy(large, words[k]);  
    }  
      
    printf("Smallest word: %s", small);  
    printf("\nLargest word: %s", large);  
}
