#include <stdio.h>
#include <stdlib.h>
/**
 * main - guess game.
 *
 *Return: Always(0) Success.
  */

int main()
{
    int secret_number = 5;
    int guess;
    int guesscount = 0;
    int guesslimit = 4;
    int outofguesses = 0;

    while(secret_number != guess && outofguesses == 0)
    {
        if(guesscount < guesslimit)
        {
            printf("Enter the secret number: ");
            scanf("%d", &guess);
            guesscount++;
        }
        else
        {
            outofguesses = 1;
        }
        if(outofguesses == 0 && guess != secret_number)
            if(guesscount < guesslimit)
            {
                printf("Try Again\n");
            }
    }
        if(guess != secret_number && outofguesses == 1)
            {
                printf("You Lose!");
            }

        else
        {
            printf("You win!");
        }
    return (0);
}