#include <stdio.h>

int main() {
    int matchsticks = 21;
    int userchoice, computerchoice;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules:\n");
    printf("\n 1. There are 21 matchsticks.");
    printf("\n 2. You and the computer can pick 1, 2, 3, or 4 matchsticks.");
    printf("\n 3. Whoever is forced to pick up the last matchstick loses the game.");
	printf("\n ----------------------------------------------------------------");
	printf("\n LETS START THE GAME :");
	
	
	
    while (matchsticks > 0) {
    	printf("\nRemaining matchsticks: %d\n", matchsticks);
        printf("\nyou can pick 1,2,3,or 4 matchsticks : ");
        scanf("%d", &userchoice);


        if (userchoice < 1 || userchoice > 4 || userchoice > matchsticks) {
            printf("\nInvalid choice. Try again.");
            continue;
        }

        matchsticks = matchsticks - userchoice;
        if (matchsticks == 0) {
            printf("\n You picked the last matchstick. You lose!");
            printf("\n ------------------------------------------------------");
            printf("\n\t\t\t GAME OVER! ");
            break;
        }

        computerchoice = 5 - userchoice;
        printf("\nComputers pick %d matchstick(s).", computerchoice);
        matchsticks = matchsticks-computerchoice;

    }
    return 0;
}
