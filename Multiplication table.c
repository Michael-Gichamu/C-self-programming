#include <stdio.h>
/**
 * main - multiplication table of first 10 numbers.
 *
 * Return: Always(0) Success.
 */

int main()
{
    int num1, num2;
    num1 = num2 = 1;
    
    while(num1 <= 10)
    {
        switch(num1)
        {
            case 1:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("Product of %d  from 1 to 10:  %d ", num1, product);
                    else if(num2 <= 9)
                        printf(",  %d ", product);
                    else if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 2:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    else if(num2 <= 4)
                        printf(",  %d ", product);
                    else if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 3:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    else if(num2 <= 3)
                        printf(",  %d ", product);
                    else if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 4:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 <= 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    else if(num2 == 2)
                        printf(",  %d ", product);
                    else if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 5:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 6:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 7:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 8:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            case 9:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d  from 1 to 10:  %d ", num1, product);
                    if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
            default:
            {
                while(num2 <= 10)
                {
                    int product;
                    product = num1 * num2;
                    if(num2 == 1)
                        printf("\nProduct of %d from 1 to 10: %d ", num1, product);
                    if(num2 > 1)
                        printf(", %d ", product);
                    ++num2;
                }
                num2 = 1;
                break;
            }
        }
        ++num1;
    }
    return (0);
}
