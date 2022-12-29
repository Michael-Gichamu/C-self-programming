#include <stdio.h>
#include <stdlib.h>

/**
 * main - How to work with switch statements.
 *
 * Return: Always(0) Success.
 */


 int main()
 {
     char exam_result;
     printf("Enter your exam result:");
     scanf(" %c", &exam_result);

     switch(exam_result)
     {
     case 'A' :
         printf("Well Done");
         break;
     case 'B' :
        printf("Great work");
        break;
     case 'C' :
        printf("Fairly done");
        break;
     case 'D' :
        printf("Poorly Done");
        break;
     case 'E' :
        printf("Failed");
        break;
     default :
        printf("Invalid Grade input");
     }
        return (0);
 }