// GUESSING GAME IN C
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int guess = 0, tries = 0;

    srand(time(NULL));
    int answer = rand() % 20 + 1; /* random number from 1 to 20 */
    printf("*** NUMBER GUESSING GAME ***\n");

    while (guess != answer)
    {
        printf("Enter your guess (1-20): ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer)
            printf("Too high!\n");
        else if (guess < answer)
            printf("Too low!\n");
        else
            printf("Congratulations!\n");
    }
    printf("It took you %d tries(s).\n", tries);
    return 0;
}
