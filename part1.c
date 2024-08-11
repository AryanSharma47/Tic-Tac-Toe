/**
 * @file part1.c
 * @brief Tic Tac Toe game implementation
 *
 * This file contains the implementation of a Tic Tac Toe game.
 * It allows two players to take turns entering numbers on a 3x3 grid.
 * The game ends when a player wins or the game is a draw.
 */

/**
 * @brief Prints the Tic Tac Toe board
 *
 * This function prints the current state of the Tic Tac Toe board.
 * It displays the grid with the current player's symbols.
 */
void printBoard();

/**
 * @brief Checks for a winner
 *
 * This function checks if there is a winner in the Tic Tac Toe game.
 * It checks all possible winning combinations on the board.
 *
 * @return 1 if there is a winner, 0 if it's a draw
 */
int Winner();

/**
 * @brief Main function
 *
 * The entry point of the program.
 * It initializes the game and starts the main game loop.
 *
 * @return 0 on successful execution
 */
int main();
#include<stdio.h>
#include<stdlib.h>


char input[]={'0','1','2','3','4','5','6','7','8','9'};

//Structure of Game
void printBoard()
{
    system("cls");
    printf("--Tic Tac Toe--\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",input[1],input[2],input[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",input[4],input[5],input[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",input[7],input[8],input[9]);
    printf("   |   |   \n");
    printf("\n\n");
}

//Check the Winner
int Winner()
{
if(input[1]==input[2]&&input[2]==input[3])
return 1;

if(input[1]==input[5]&&input[5]==input[9])
return 1;

if(input[1]==input[4]&&input[4]==input[7])
return 1;

if(input[2]==input[5]&&input[5]==input[8])
return 1;

if(input[3]==input[6]&&input[6]==input[9])
return 1;

if(input[3]==input[5]&&input[5]==input[7])
return 1;

if(input[4]==input[5]&&input[5]==input[6])
return 1;

if(input[7]==input[8]&&input[8]==input[9])
return 1;


//Check Draw Condition
int c=0;
for(int i=0;i<=9;i++)
{
    if(input[i]=='X' || input[i]=='O')
    c++;
}
if(c==9)
 return 0;
}


int main()
{
    int Player=1;
    printBoard();
    while (1)
    {
    Player=(Player%2==0)? 2 : 1;
    char symbol=(Player==1)?'X':'O'; 
    printf("Please Enter a Number For Player Number: %d\n",Player);
    int enter;
    scanf("%d",&enter);
    if(enter<1 || enter>9)
    {
        printf("Not a Valid input");
    }
    else
    {
      input[enter]=symbol;
    }
    printBoard();
    int result=Winner();
    if(result==1)
    {
     printf("Winner is Player %d\n",Player);
     break;
    }
    if(result==0)
    {
        printf("Match Draw\n");
        break;
    }
    
    Player++;
    }
    return 0;
}