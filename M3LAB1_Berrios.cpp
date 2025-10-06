/* 
CSC 134
M3LAB1
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main( ) {
// Declare variables
int choice; 
string youHaveChosen = "You have chosen the";

// Welcome user and ask them to choose from three options
cout << "Welcome to Mike's Safari Zone!" << endl;
cout << "Today, you have three options to choose from: 1. Battle, 2. Run, or 3. Capture." << endl;
cout << "Which number option would you like?" << endl;
cin >> choice; 

// Set up Decision Structure
if (choice == 1) {
    cout << youHaveChosen <<  " battle option. With this, you may weaken your opponents." << endl;
} else if ( choice == 2) {
    cout << youHaveChosen << " run option. With this, you may get away now." << endl;
} else if (choice ==3) {
    cout << youHaveChosen << " capture option. With this, you may attempt to capture your target." << endl;
}

// Print farewell
cout << "Good Luck!" << endl;

return 0;
}
