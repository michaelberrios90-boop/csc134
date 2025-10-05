# include <iostream>
# include <iomanip>
using namespace std; 

int main() {

// Declare variables
double lengthA, widthA, lengthB, widthB, areaA, areaB;

// Ask user to input length of first rectangle
cout << "Enter the length of the first rectangle: " << endl;
cin >> lengthA;

// Ask user to input the width of the first rectangle
cout << "Enter the width of the first rectangle: " << endl;
cin >> widthA;

// Ask user to input length of the second rectangle
cout << "Enter the length of the second rectangle: " << endl;
cin >> lengthB;

//Ask user to input the width of the second rectangle
cout << "Enter the width of the second rectangle: " << endl;
cin >> widthB;

// Calculate the area of the two rectangles
areaA = lengthA * widthA;
areaB = lengthB * widthB;

// Print the results 
cout << fixed << setprecision(2);
cout << "The area of the first rectangle is: " << areaA << endl;
cout << "The area of the second rectangle is: " << areaB << endl;

return 0; 
}
