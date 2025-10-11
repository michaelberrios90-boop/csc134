/*
CSC 134
MSLAB 2
michaelberrios90
10/10/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables
int gradeNumber; 
string letterGrade; 

// Ask user to input a numberical grade
cout << "Enter the numerical grade: ";
cin >> gradeNumber;

// Set up Grading System 
if (gradeNumber >= 90 && gradeNumber <= 100) 
        letterGrade = "A";
    else if (gradeNumber >=80 && gradeNumber <=89) 
        letterGrade = "B";
    else if (gradeNumber >= 70 && gradeNumber <=79)
        letterGrade = "C";
    else if (gradeNumber >=60 && gradeNumber <=69)
        letterGrade = "D";
else
    letterGrade = "F";

// Print the results
cout << "Your letter grade is: " << letterGrade << endl;
cout << " " << endl;
    return 0;
}
