/*
CSC 134 
M2LAB
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

// Declare variables
double lengthCrate, widthCrate, heightCrate, volumeCrate;
double costCrate, chargeCrate, profitCrate;
double COST_PER_CUBIC_FEET = 0.23;
double CHARGE_PER_CUBIC_FEET = 0.5;

// Ask user for the dimensions of crate. 
cout << "Enter the length of the crate: ";
cin >> lengthCrate;
cout << "Enter the width of the crate: ";
cin >> widthCrate;
cout << "Enter the height of the crate: ";
cin >> heightCrate;

// Calculate the volume of the crate.
volumeCrate = lengthCrate * widthCrate * heightCrate; 

// Calculate the cost of the crate.
costCrate = volumeCrate *COST_PER_CUBIC_FEET;

// Calculate the Customer's Price.
chargeCrate = volumeCrate *CHARGE_PER_CUBIC_FEET;

// Calculate the profit of each crate
profitCrate = chargeCrate - costCrate;

// Print the results
cout << "---------------------------------------" << endl;
cout << "Key Metrics " << endl;
cout << fixed << setprecision(2);
cout << "Volume: " << volumeCrate << " cubic feet" << endl;
cout << fixed << setprecision(2);
cout << "Cost: $" << costCrate << endl;
cout << fixed << setprecision(2);
cout << "Customer's Price: $" << chargeCrate << endl;
cout << fixed << setprecision(2);
cout << "Profit: $" << profitCrate << endl;
cout << "---------------------------------------" << endl;

    return 0; 
}
