#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    char *choices[] = {"Stone", "Paper", "Scissor"};

    printf("Choose, 0 for Stone, 1 for Paper and 2 for Scissor: ");
    scanf("%d", &player);

    if (player < 0 || player > 2)
    {
        printf("Invalid choice! Please choose 0, 1, or 2.\n");
        return 1;
    }

    printf("You chose %s and Computer chose %s\n", choices[player], choices[computer]);

    if (player == computer)
    {
        printf("It's a draw!\n");
    }
    else if ((player == 0 && computer == 2) ||
             (player == 1 && computer == 0) ||
             (player == 2 && computer == 1))
    {
        printf("Hoorah! You Won\n");
    }
    else
    {
        printf("You lost! Better luck next time.\n");
    }

    return 0;
}
