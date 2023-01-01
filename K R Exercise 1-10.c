#include <stdio.h>
#include <stdlib.h>
/**
 * main - copy's input to output
 * and on occurrence of tabs prints /t
 * backspace prints /b and for backslash prints //
 * in an unambiguous way.
 *
 *Return: Always(0)Success.
 */

int main()
{
 int c;

 while((c = getchar()) != EOF)
 {
     if(c == '\t')
        printf("\\t");
     if(c == '\b')
        printf("\\b");
     if(c == '\\')
        printf("\\\\");
     if(c != '\t' && c != '\b' && c != '\\')
     {
         putchar(c);
     }
 }

return 0;
}
