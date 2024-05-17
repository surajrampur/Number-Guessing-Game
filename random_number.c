
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    int guess, numberOfGuess = 1;
    do
    {
        printf("Enter the number between 1 to 100 \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("you guessed it in %d attempts\n", numberOfGuess);
        }
        numberOfGuess++;
    } while (guess != number);
}