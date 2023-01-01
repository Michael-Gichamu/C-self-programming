#include <stdio.h>

/**
 * main - voting day for one individual.
 * Individual must be 18 years and above.
 *
 * Return: Always(0) Success.
 */

int main()
{
    int age, male, female, population, individual;
    char gender, candidate;

    male = female = individual = 0;
    printf("VOTING DAY.\n");

    printf("Enter your age: ");
    scanf("%d", &age);
    if(age < 18)
        printf("Your are not eligible to vote");
    else
        printf("You are eligible to vote.\n");
    while(age >= 18 && individual == 0)
    {
        printf("Enter your Gender: Input F or M.\nF for (female) M for (male): ");
        scanf("\n%c", &gender);

        if(gender == 'M')
        {
            printf("Enter your candidate of choice: Choose 1!.\nA. (Michael) B. (Matere): ");
            scanf("\n%c", &candidate);
            ++male;
        }
        else if(gender == 'F')
        {
            printf("Enter your candidate of choice: Choose 1!.\nA. (Michael) B. (Matere): ");
            scanf("\n%c", &candidate);
            ++female;
        }
        else
            break;
        ++individual;
    }
    if(candidate == 'A')
        printf("You voted for Michael");
    else if(candidate == 'B')
        printf("You voted for Matere");
    return (0);
}