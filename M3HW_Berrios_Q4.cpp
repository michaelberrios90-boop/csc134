/*
CSC 134 
M3Hw- Question 4 Gold
michaelberrios90
10/13/2025
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    // Declare variables including seed
    int num1, num2, total, additionAnswer;
    int seed = time(0);
    const int MAX = 10; 
    
    // Seed the RNG
    srand(seed);

    // Set and display first and second numbers
    num1 = (rand() % MAX); // 0-9
    cout << "Your first number is " << num1 << endl;
    num2 = (rand() % MAX) ;// 0-9 
    cout << "Your second number is " << num2 << endl;

    // Set total
    total = num1 + num2;

    // Ask user for the sum of both numbers 
    cout << "What is " << num1 << " + " << num2 << "?" << endl;
    cin >> additionAnswer; 
   
    // Set up if-else conditional 
    if (additionAnswer == total) {
        cout << "Correct" << endl;
        cout << " " << endl;
    }
    else {
        cout << "Incorrect" << endl;
        cout << " " << endl;
    }
  
    return 0;
}
