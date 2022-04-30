#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char PlayerInterestedToPlay;
    do{
        system("clear");
        PlayerInterestedToPlay = ' ';
        const char winCases[3][2][10] = {
            {"rock", "scissors"},
            {"scissors", "paper"},
            {"paper", "rock"}
        };

        srand(time(NULL));
        const int randomNumber = rand() % 3;
        const char options[3][10] = {"scissors", "paper", "rock"};
        const char *pcChoice = options[randomNumber];

        char userChoice[10];
        printf("\nEnter your selection(rock/paper/scissors): \n");
        scanf("%s", userChoice);
        printf("\nThe computer choice is %s\n\n", pcChoice);

        char *gameCase[2] = {userChoice, pcChoice};

        int i;
        int checkForWin = 0;
        for (i = 0; i < 3; ++i){
            if (strcmp(winCases[i][0], gameCase[0]) == 0 && strcmp(winCases[i][1], gameCase[1]) == 0){
                    checkForWin = 1;
                }
        }
        

        if(strcmp(userChoice, pcChoice) == 0){
            printf("Tie !\n");
        } else if (checkForWin){
            printf("You Win!\n");
        } else {
            printf("You lose!\n");
        }

        printf("\nWould you like to play again? (y/N): \n");
        
        scanf("%s", &PlayerInterestedToPlay);
        PlayerInterestedToPlay = toupper(PlayerInterestedToPlay);
        

    }
    while(PlayerInterestedToPlay == 'Y');
    
	return 0;
}