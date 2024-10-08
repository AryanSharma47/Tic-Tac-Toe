**Tic Tac Toe Game**

This project is a simple implementation of the classic Tic Tac Toe game in C.

**Overview**

The game allows two players to take turns entering numbers on a 3x3 grid. The game continues until one player wins or the game ends in a draw.

**How It Works**

Gameplay: Players choose a position on the grid by entering a number between 1 and 9. The first player uses 'X', and the second player uses 'O'.

Winning: The game checks for a winner after each move by evaluating all possible winning combinations.

Draw: If all positions on the grid are filled and no player has won, the game ends in a draw.

**Functions**

printBoard(): Displays the current state of the Tic Tac Toe board.

Winner(): Checks the board for a winner or a draw.

main(): Initializes the game and manages the main game loop.

**Compilation and Execution**

To compile and run the game, use the following commands in your terminal:

gcc -o tictactoe part1.c
./tictactoe
 
**License**

This project is open-source and available under the MIT License.

