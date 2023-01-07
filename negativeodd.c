#include <stdio.h>
/**
 * main - checks whether a number is a negative odd number.
 *
 * Return: Always(0) Success.
 */

int main()
{
while(1){
    int number;
    printf("Enter a Number: ");
    scanf("%d", &number);
    if(number > 0)
    {
        printf("Positive Value.");
        break;
    }
    if(number < 0 && ((number % 2) == 0))
    {
        printf("Negative Value\n");
        continue;
    }
    printf("%d\n", number);
}
    return (0);

}