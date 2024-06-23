#include<stdio.h>
#include <string.h>

void isPalindrome(char str[]) {
    int low = 0;
    int high = strlen(str) - 1;

    while (low < high) {
        if (str[low] != str[high]) {
            printf("%s is not palindrome", str);
            return;
        }
        low++;
        high--;
    }
    printf("%s is palindrome", str);
    return;
}

main()
{
    char str[30];
 
    printf ("Enter the string: \n");
    gets (str);
 	isPalindrome(str);
 
}
