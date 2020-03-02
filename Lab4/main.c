#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int max;
    int num;
    int val; //val = value / current guess
    int howmany=0; //number of guesses

    printf("Welcome to the number guessing game!\n\n");
    printf("Enter an integer that is 100 or bigger: ");
    scanf("%d", &max);

    //generate the random number
    srand(time(0));
    num = (rand() % max) + 1;

    printf("I have just generated a number between 1 and %d\n",max);
    printf("Now you try to guess what the number is\n\n");

    //Play the game
    do {
        printf("Enter your guess here: ");
        scanf("%d", &val);
        howmany++;
        if (val < num) {
            printf("That is too low. Try again.\n");
        } else if (val > num ) {
            printf("That is too high. Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d tries!", howmany);

        }
    } while (val != num);

    return 0;
}
