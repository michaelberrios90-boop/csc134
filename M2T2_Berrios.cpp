/*
CSC 134
M2T2- Receipt Calculator
michaelberrios90
9/26/2025
*/

#include <iostream>
#include <iomanip> // for 2 decimal trick
using namespace std;

int main() {
/* Build a simple receipt calculator for the bill
from a restaurant (excluding tips) */

// Set up variables
// Declare Real amount_tax, total
// Declare Real constant TAX_RATE = 0.08
// Declare Real meal_price = $5.99
double amount_tax, total;
double TAX_RATE = 0.08;
double meal_price = 5.99;

// Set amount_tax = meal_price * TAX_RATE
// Set total = meal_price + amount_tax
amount_tax = meal_price * TAX_RATE;
total = meal_price + amount_tax;

// Display results
cout << "Meal Price: $" << meal_price << endl;
cout << "Tax: $" << fixed << setprecision (2) << amount_tax << endl;
cout << "Total Bill: $" << fixed << setprecision(2) << total << endl;
cout << "We hope to see you again soon!" << endl;
    return 0;
}
