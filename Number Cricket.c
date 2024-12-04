/*Welcome to Number Cricket.
Here is short description to help u understand the game
First toss will happen and user will be required to choose from 1 and 2 (1 is for Heads 2 is for Tails)
If player wins toss player will bat first else computer will bat first.
Player/Computer will bat until opponent gets him out. For example if player is batting and both computer and player choose the same move then player is out and similarly the other way round.Now target will be set and the opponent has to chase target without getting out .If target is chased chaser wins and if not then the player who batted first wins.   
 */ 
 
//Program Code

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int playerScore = 0, computerScore = 0, totalScore = 0;
int playerMove, computerMove;
int targetScore;
int isOut = 0;    

int toss(void);
void firstbatting(int);
void secondbatting(int);

int main() {
   
    int tossval = toss();
    
    if (tossval == 1)
    {
        firstbatting(1); //parameter 1 means player batting frst
        printf("The target score for computer to chase is: %d\n", targetScore);
        totalScore = 0;
        playerScore = 0;
        computerScore = 0;
        
        printf("Now it's Computer's turn to bat...\n");
        secondbatting(2);  //parameter 2 means computer chasing
    }
    else
    {
        firstbatting(2);   //parameter 2 means computer batting frst
        printf("\nThe target score for you to chase is: %d\n", targetScore);
        totalScore = 0;
        playerScore = 0;
        computerScore = 0;
        printf("Now it's your turn to bat...\n\n");
        secondbatting(1);   //parameter 1 means player chasing
    }
    return 0;
}

int toss(void)
{
    int tossResult,playertoss;
    printf("\n**********************************Welcome to Number Cricket!!!*************************************\n\n");
    printf("Let's start with the toss...\n");
    while(1)
    {
        printf("Choose 1 for Heads\n or \n2 for Tails.\n");
        scanf("%d",&playertoss);
        if (playertoss < 1 || playertoss > 2) 
        {
            printf("Invalid choice !!! Please choose 1 OR 2\n");
        }  
        else
          break;
    }
    tossResult = rand() % 2 + 1; 
    printf("Toss Result: %d\n",tossResult);
    if (tossResult == playertoss) 
     {   
         printf("Player wins the toss and will bat first!\n");
         return 1;
     }
    else
    {    
        printf("Computer wins the toss and will bat first!\n");
        return 2;
    }
}

void firstbatting(int first)
{
 
  // Computer's batting phase
        while (1) {
            
            printf("Enter your move (1 to 5): ");
            scanf("%d", &playerMove);
            
            computerMove = rand() % 5 + 1;  // Computer chooses a number from 1 to 5
            
            if (first == 2)
                printf("Computer chooses: %d\n", computerMove);

            // Check if the player entered a valid move
            if (playerMove < 1 || playerMove > 5) 
            {
                printf("Invalid move! Please choose a number between 1 and 5.\n");
                if (first == 2)
                {
                    totalScore += computerMove; 
                    printf("\nComputer's total score: %d\n", totalScore);
                }
                continue;
            }

            // If player and computer choose the same number, computer is out
            if (playerMove == computerMove) 
            {
                if (first == 1)
                    printf("You chose %d and the computer chose %d. \nYou are OUT!\n", playerMove, computerMove);
                else
                    printf("You chose %d and the computer chose %d. \nComputer is OUT!\n", playerMove, computerMove);
                    
                 targetScore = totalScore;  //target score set
                break;
            } 
            else 
            {
                if (first == 1) 
                {
                    totalScore += playerMove;  // Add player's score to the total
                    //playerMove += playerMove;  // Update player's total score
                    printf("Computer chooses: %d \n", computerMove);
                    printf("Your total score: %d \n", totalScore);
                }
                else
                {
                    totalScore += computerMove;  // Add computer's score to the total
                //    computerScore += computerMove;  // Update computer's total score
                    printf("Computer's total score: %d\n", totalScore);
                }
            }
        }   
}

void secondbatting(int first)
{
    while (1) 
    {
            printf("Enter your move (1 to 5): ");
            scanf("%d", &playerMove);
    
            computerMove = rand() % 5 + 1;  // Computer chooses a number from 1 to 5
            if (first == 2)
                printf("Computer chooses: %d\n", computerMove);

            // Check if the player entered a valid move
            if (playerMove < 1 || playerMove > 5) {
                printf("Invalid move! Please choose a number between 1 and 5.\n");
                
                if (first == 2)
                {
                    totalScore += computerMove; 
                    printf("\nComputer's total score: %d\n", totalScore);
                }
                
                printf("Invalid move! Please choose a number between 1 and 5.\n");
                continue;
            }

            // If player chooses the same number as the computer's last number, player is out
            if (playerMove == computerMove) 
            {
                if (first == 1)
                    printf("You chose %d and the computer chose %d. You are OUT!\n", playerMove, computerMove);
                else
                    printf("You chose %d and the computer chose %d. Computer is OUT!\n", playerMove, computerMove);
                //break;
            } else 
            {
                if (first == 1)
                {
                    playerScore += playerMove;  // Add player's score to the total
                    printf("Computer chooses: %d \n", computerMove);
                    printf("Your score: %d | Target score: %d\n", playerScore, targetScore);
                }
                else
                {   
                    computerScore += computerMove; 
                    printf("Computer score: %d | Target score: %d\n", computerScore, targetScore);
                }
            }
            if (first == 1)
            {
                if (playerScore >= targetScore) 
                {
                    printf("Congratulations! You chased the target and won!\n");
                    break;
                }
                else if ((playerMove == computerMove) && (playerScore < targetScore)) 
                {
                    printf("Computer wins! Better luck next time.\n");
                    break;
                }   
            }
            else
            {   
                 if (computerScore >= targetScore) 
                {
                    printf("Computer wins! Target achieved.\n");
                    break;
                }
                else if ((playerMove == computerMove) && (computerScore < targetScore)) 
                {
                    printf("Congratulations! You won Computer Lost!\n");                    
                    break;
                }   
                
            }
    }
}
