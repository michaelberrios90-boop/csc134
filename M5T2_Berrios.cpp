/*
CSC 134
M5T2
michaelberrios9-0
11/9/2025
*/

#include<iostream>
using namespace std;

// declare functions
// given 2 numebrs, print them out nicely on a line
void printAnswerLine(int number, int result) {
    cout << number << " sqaured = " << result << endl;
}

// given 2 numbers, return the square of it
int square(int number) {
    int result;
    result = number * number; // squared
    return result;
}
int main(){
    // count some numbers and find a result for each
    int count = 1;
    int result;
    while (count <=10) {
        result = square(count);
        printAnswerLine(count, result);
        count++;
    }

    return 0;
}

