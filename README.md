# Rock-Paper-Scissors-Game
 
**Rock Paper Scissors Game** 

This repository contains a simple implementation of the classic Rock, Paper, Scissors game in C++. Players can compete against a computer opponent with randomized choices.

**Features**
-User-friendly console-based interface.
-Randomized computer choices.
-Clear display of game results (win, lose, or tie).
-Option to play multiple rounds.

**Game Rules**

The game follows the traditional rules of Rock, Paper, Scissors:

-Rock beats Scissors: If the player chooses Rock and the computer chooses Scissors, the player wins.
-Scissors beats Paper: If the player chooses Scissors and the computer chooses Paper, the player wins.
-Paper beats Rock: If the player chooses Paper and the computer chooses Rock, the player wins.

The outcomes are determined by the rule function in the C++ code, which takes the player's choice (`p`) and the computer's choice (`c`) as parameters. The function returns:
-  1 if the player wins,
- -1 if the player loses,
-  0 if it's a tie.

These rules ensure a fair and classic Rock, Paper, Scissors experience for the players.

**Code Overview**

1.Initialization: Initialize variables for the computer's choice(computer),the player's choice(player),and a flag for playing again(playmore).

2.Display Welcome Message: Display a welcome message and game instructions using cout.

3.Game Loop: Start a do-while loop to allow multiple rounds of the game until the user chooses to exit (playmore != 'n').

4.Generate Computer's Choice: Generate a random number using rand() and % 100 to determine the computer's choice (r, p, or s).

5.Player Input: Prompt the player to enter their choice (r, p, or s) using cin.

6.Evaluate Game Result: Use the rule function to determine the result of the game based on the player's and computer's choices.
Display the result message indicating whether the player won, lost, or it's a tie.

7.Play Again Prompt: Ask the player if they want to play again. If the player enters 'n', exit the loop; otherwise, continue.

8.Display Result and Repeat: Display a line of dashes for aesthetics. Repeat the loop for the next round.

9.Exit: End the program when the player chooses not to play again.

This algorithm provides a high-level overview of the steps involved in each round of the Rock, Paper, Scissors game, from initialization to user interaction and game evaluation.

**"Scissors snip, paper wraps, and rocks roll – Game joyfully! 🌟🎮"**




