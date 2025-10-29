// CSC 134
// michaelberrios90
// M4LAB1- A program to build a box (5x5) using asterisks
// 10/28/2025

#include <iostream>
using namespace std; 

int main() {

    cout << "M4LAB\n";

    // declare variables
    int height, width;

    // start with a set size
    // to finish, use variable sizes by asking user
    // height = 5;
    // width = 5;
    cout << "How tall should the block be?" << endl;
    cin >> height;
    cout << "How wide shoud the block be?" << endl;
    cin >> width;

    // test: make a row of asterisks
    cout << "One row" << endl;
    for (int i=0; i < width; i++) {
        cout << "x" << " ";
    }
    cout << endl; // finish the row

    // test: make a column of asterisks
    cout << "One column" << endl;
    for (int j=0; j < height; j++) {
        cout << "x" << endl;
    }

    // print a row within the outer loop
    // (nested loops)
    cout << "The entire block" << endl;
    for (int j=0; j < height; j++) {
        // print one row
        for (int i=0; i < width; i++) {
            cout << "x" << " ";
        }
        cout << endl; // end the row with a newline
    }

    return 0;
}
