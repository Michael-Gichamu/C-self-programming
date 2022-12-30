#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts blanks, tabs, and newlines.
 * 
 *Return: Always(0) Success.
 */

int main()
{
 int c, nl, tab, blank;

 nl = 0;
 tab  = 0;
 blank = 0;
 while ( (c = getchar()) != EOF)
 {
     if (c == '\t'){
                ++tab;
        printf("%d\n", tab);

     }
     if (c == ' '){
                ++blank;
        printf("%d\n", blank);
 }
     if (c == '\n'){
                ++nl;
        printf("%d\n", nl);
     }
}

return (0);
}