#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
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
	printf("Enter your selection(rock/paper/scissors): \n");
	scanf("%s", userChoice);
	printf("The computer choice is %s\n", pcChoice);

	char *gameCase[2] = {userChoice, pcChoice};

	int i;
	int checkForWin = 0;
	for (i = 0; i < 3; ++i){
	    if (strlen(winCases[i][0]) == strlen(gameCase[0]) && strlen(winCases[i][1]) == strlen(gameCase[1])){
				checkForWin = 1;
			}
	}


	if(strlen(userChoice) == strlen(pcChoice)){
		printf("Tie !\n");
	} else if (checkForWin){
		printf("You Win!\n");
	} else {
		printf("You lose!\n");
	}

	return 0;
}