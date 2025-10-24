/*
CSC 134
M4T1
michaelberrios90
10/23/2025
*/

// program 5-3
#include <iostream>
#include <iomanip>
using namespace std; 

int main () {
    int number = 5;

    int i = 0;
    while (i < number) {
        cout << "Hello" << endl;
        // i = i + 1
        i++; // short hand for i = i +1
    }
    cout << "That's all!" << endl;
    
// program 5-6
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 10;

    int num = MIN_NUMBER;
    // print a table header
    cout << "Number\tNumber Squared" << endl;

    while (num <= MAX_NUMBER) {
        cout << num << "\t\t" << num * num << endl;
        // if we don't increase num here,
        // it will be an infinite loop, which is a big no no.
        num ++;
    }
    
    return 0;
}

