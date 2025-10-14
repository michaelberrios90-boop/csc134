
/*
CSC 134
M3HW - Question 3 Gold Tier
michaelberrios90
10/13/2025
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main ()
{
    // Declare Variables
    string marbleChoice;
    int numPick;
    string letsPlay = "Let's play a game! ";

    // Ask user to pick between the red or blue ball
    cout << letsPlay << "There are two marbles: a red one and a blue one. Please pick only one." << endl;
    cin >> marbleChoice;

    // Set up conditional if-else for marble choice
    if (marbleChoice == "red"){
        cout << "Sorry, Game Over!" << endl;
    }
    else {
        cout << "Congrat's! You move onto the second phase!" << endl;
        cout << "Now choose a number between 1 and 100." << endl;
        cin >> numPick;
            if (numPick >= 75 && numPick<= 80) {
                cout << "Good Job! you win!" << endl;
            }
            else {
                cout << "Sorry, You Lose!" << endl;
            }
    }

    return 0;
}
