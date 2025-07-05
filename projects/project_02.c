#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int player, computer;
    // Initialize random number generator
    srand(time(0)); // Seed the random number generator with the current time

    // Generate and print a random number between 0 and 2
    computer = rand() % 3;

    /*
    0 ---> snake
    1 ---> water
    2 ---> gun
    */

    printf("choose 0 for snake | 1 for water | 2 for gun:\n");
    scanf("%d", &player);
    printf("computer choose %d\n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a Draw!");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win('=')");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You lose('-')");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You lose('-')");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's a Draw!");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win('=')");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You Win('=')");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You lose('-')");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a Draw!");
    }
    else{
        printf("Something went wrong!!");
    }

    return 0;
}