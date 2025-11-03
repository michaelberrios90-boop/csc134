// CSC 134
// michaelberrios90
// 11/2/2025
// M4HW1- Gold
// multplication table of times table of 1 to 12.


#include <iostream>
using namespace std;

int main() {
    // declare variables
    int firstNum, answer;
    
    // Ask user for input 
    cout << "Enter a number from 1 to 12: ";
    cin >> firstNum;
    while (firstNum < 1 || firstNum >12) {
        cout << "Invalid value. Please pick a number between 1 and 12: ";
        cin >> firstNum;
    }
    
    // For loop to calculate 5 times number picked by user.
    for (int i = 1; i <=12; i++) {
        answer = firstNum * i;
        cout << firstNum << " times " <<
        i << " is " << answer << endl;

    }

    return 0;
}
