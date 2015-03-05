/* 
 * File:   palindrome.c
 * Author: tomix
 *
 * Created on February 23, 2015, 9:23 AM
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define EOL '\n'
#define TRUE 1
#define FALSE 0

/*
 * 
 */
int main() {

    char letter[80];
    int tag, count, countBack, flag, loop = TRUE;
    
    /*Main loop*/
    
    while(loop) {
        flag = TRUE;
        
        /* read in  letters */
        printf("Please enter a word, phrase or sentences below:\n");
        for(count = 0; (letter[count] = getchar())!= EOL; ++count);
        
        if((toupper(letter[0])== 'E') &&(toupper(letter[1]) == 'N') &&
                (toupper(letter[2]) == 'D')) break;
        
        tag = count - 1;
        
        for((count = 0, countBack = tag); count <= tag/2; 
                (++count, --countBack)) 
        {
            if(letter[count] != letter[countBack]) {
                flag = FALSE;
                break;
            }
        }
        
        for(count = 0; count <= tag; ++count)
        {
            putchar(letter[count]);
        }
        if(flag) printf(" is a Palindrome\n\n");
        else printf(" is not a Palindrome\n\n");
    }
}

