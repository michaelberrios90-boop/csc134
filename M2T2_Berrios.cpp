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
// Purpose - Create a simple receipt
// should also handle sales tax (8%)

// Declare our variables
string item = "Hamburgers"; 
double amount_tax, total;
double TAX_RATE = 0.08;
double meal_price = 5.99;

// Greeet user and take the order
    
// Calculate the meal price
    
// Calculate the sales tax and the total price
    
// Print the receipt

amount_tax = meal_price * TAX_RATE;
total = meal_price + amount_tax;

// Display results
cout << "Meal Price: $" << meal_price << endl;
cout << "Tax: $" << fixed << setprecision (2) << amount_tax << endl;
cout << "Total Bill: $" << fixed << setprecision(2) << total << endl;
cout << "We hope to see you again soon!" << endl;
    return 0;
}
