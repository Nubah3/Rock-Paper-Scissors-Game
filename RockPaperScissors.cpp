#include <bits/stdc++.h>
using namespace std;

// Function to determine the result of the game
int rule(char p, char c) {
    if (p == c) {
        return 0; // Tie
    }
    if (p == 'r' && c == 'p') {
        return -1; // Player loses
    } else if (p == 's' && c == 'p') {
        return 1; // Player wins
    } else if (p == 'p' && c == 'r') {
        return 1; // Player wins
    } else if (p == 's' && c == 'r') {
        return -1; // Player loses
    } else if (p == 'r' && c == 's') {
        return 1; // Player wins
    } else if (p == 'p' && c == 's') {
        return -1; // Player loses
    }
}

int main() {
    char computer;
    char player;
    char playmore;

    // Display a line of dashes for aesthetics
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;

    // Display a welcome message
    cout << "\t\t\t\t";
    cout << "      Welcome to Rock, Paper, and Scissors Game    " << endl;

    // Display another line of dashes
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;

    // Display game instructions
    cout << "\t\t\t\t";
    cout << "\t Note: " << endl;
    cout << "\t\t\t\t";
    cout << "\t\t r - Rock" << endl << "\t\t\t\t" << "\t\t p - Paper" << endl << "\t\t\t\t" << "\t\t s - Scissors" << endl << "\t\t\t\t"<< endl << endl;

    // Display another line of dashes
    cout << "\t\t\t\t";
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;

    do {
        int number = 0;

        // Seed the random number generator based on current time
        srand(time(0));

        // Generate a random number in the range 0 - 99
        number = rand() % 100;

        // Determine the computer's choice based on the random number
        if (number < 33) {
            computer = 'r';
        } else if (number > 66) {
            computer = 's';
        } else {
            computer = 'p';
        }

        // Prompt the user to enter their choice
        cout << "\t\t\t\t";
        cout << "Enter your choice: ";
        cin >> player;

        // Determine the result of the game using the rule function
        int result = rule(player, computer);

        // Display the result of the game
        if (result == 1) {
            cout << "\t\t\t\t";
            cout << "You won! Hurray" << endl;
        } else if (result == -1) {
            cout << "\t\t\t\t";
            cout << "You lose! Bad Luck" << endl;
        } else {
            cout << "\t\t\t\t";
            cout << "Woah! That's a Tie!" << endl;
        }

        // Ask the user if they want to play again
        cout << "\t\t\t\t";
        cout << "Do you want to play again?" << endl;
        cout << "\t\t\t\t";
        cout << "Note: Press 'n' to exit! Press anything to continue: ";
        cin >> playmore;

        // Display another line of dashes
        cout << "\t\t\t\t";
        for (int i = 0; i < 50; i++) {
            cout << "-";
        }
        cout << endl;

    } while (playmore != 'n'); // Continue the loop if the user doesn't press 'n'

    return 0;
}
