/*
CSC 134 
M3HW Question 1- Gold Tier
michaelberrios90
10/13/2025
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{

    // Declare variables
    string responseAnswer;

    // Display opening greeting
    cout << "Hello, I'm a C++ program!" << endl;

    // Ask user if they like it
    cout << "Do you like me? Please type yes or no. " << endl;
    cin >> responseAnswer;

    // Set up responseAnswer if-else conditional structure
    if (responseAnswer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl; }
    else if (responseAnswer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl; }
    else {
        cout << "If you're not sure...that's OK." << endl;
    }

    return 0;  
}
