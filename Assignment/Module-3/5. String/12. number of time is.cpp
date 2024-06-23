#include<stdio.h>
#include <string.h>

main()
{
	int ctr = 0, i, freq = 0;
    int char_i, s, spc; 
    char str[100];

    printf("Input the string : ");
    fgets(str, sizeof str, stdin);

    ctr = strlen(str);

    for (i = 0; i <= ctr - 3; i++) {
        
        char_i = (str[i] == 'i' || str[i] == 'I');
        s = (str[i + 1] == 's' || str[i + 1] == 'S');
        spc = (str[i + 2] == ' ' || str[i + 2] == '\0');

        if ((char_i && s && spc) == 1)
            freq++;
    }

    printf("The frequency of the word \'is\' is : %d", freq);
}
