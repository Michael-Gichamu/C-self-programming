#include <stdio.h>
/** 
 * main - finds the difference between three complex numbers.
 * 
 * Return: Always(0) Success.
 */

typedef struct Complex{
    double real;
    double imaginary;
}cmpx;

int main()
{
    cmpx Complex1 = {.real = 38.5, .imaginary = 12};
    cmpx Complex2 = {.real = 24.5, .imaginary = 5};
    cmpx Complex3 = {.real = 12.2, .imaginary = 4};

    cmpx difference1;
    cmpx difference2;

    difference1.real = Complex1.real - Complex2.real;
    difference1.imaginary = Complex1.imaginary - Complex2.imaginary;
    difference2.real = difference1.real - Complex3.real;
    difference2.imaginary = difference1.imaginary - Complex3.imaginary;
    printf("Result of the difference of the first two complex numbers is: %.2lf + %.2lfi\n", difference1.real, difference1.imaginary);
    printf("Result of the difference of all three complex numbers is: %.2lf + %.2lfi", difference2.real, difference2.imaginary);

	return 0;
}

