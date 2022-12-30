#include <stdio.h>
#include <stdlib.h>

/**
 * main - copys input to output 
 * if occurence of 1 or more blanks a single blank is output.
 * 
 * Return: Always(0) Success.
 */

int main()
{
 int c, nb;

 nb = 0;
 while((c = getchar()) != EOF)
 {
     if(c == ' ')
        ++nb;

     if(c != ' ')
     {
         if(nb >= 1 ){
            putchar(' ');
            nb = 0;

         }
         putchar(c);
     }

 }

return 0;
}