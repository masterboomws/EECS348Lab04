#include <stdio.h>

int main() {
	int Score = 0; //declare score variable to be used in loop
	while (Score != 1) { //while the user doesn't input 1
		printf("Enter the NFL score (Enter 1 to stop): "); //display message to user
		scanf("%d", &Score); //user input
		if (Score == 1) {break;}
		if (Score < 0) {
			printf("Enter a valid number\n");
		} else {
		printf("Possible combinations of scoring plays if a team's score is %d\n", Score);

		int maxTDPlus2 = Score /  8; //find max possible TDs plus 2 points as is possible with provided score
		for (int TDPlus2 = 0; TDPlus2 <=  maxTDPlus2; TDPlus2++) { //loop through all of the possible amounts of TD plus 2
			int maxTDPlusFG = (Score - (TDPlus2*8))  / 7; //find the max possible TD plus FG with the current TDs plus 2 points
			for (int TDPlusFG = 0; TDPlusFG <=  maxTDPlusFG; TDPlusFG++) {
				int maxTD = (Score - (TDPlus2*8) - (TDPlusFG*7)) / 6; //
				for (int TD = 0; TD <= maxTD; TD++) {
					int maxFG = (Score - (TDPlus2*8) - (TDPlusFG*7) - (TD*6)) / 3;
					for (int FG = 0; FG <= maxFG; FG++) {
						int currentScore = (Score - (TDPlus2*8) - (TDPlusFG*7) - (TD*6) - (FG*3));
						if (currentScore % 2 == 0) {
							int Safety = (Score - (TDPlus2*8) - (TDPlusFG*7) - (TD*6) - (FG*3)) / 2;
							printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", TDPlus2, TDPlusFG, TD, FG, Safety);
						}
					}
				}
			}
		}
		}
	}
}
