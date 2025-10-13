/*
CSC 134
M3HW Question 2- Gold Tier
michaelberrios90
10/13/2025
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main() {

    // Declare variables
    double mealPrice, tipAmount, taxAmount, total;
    string orderAnswer;
    double TIP_PERCENT = 0.15, TAX_PERCENT = 0.08;

    // Ask user to enter the meal price
    cout << "Enter the meal price: $"; // to keep on same line, don't use endl;
    cin >> mealPrice;

    // Ask user if order is dine in or takeaway
    cout << "Is this meal for dine-in or takeaway? " << endl;
    cin >> orderAnswer;

    // Set up if-else conditional statement for meal order
    if (orderAnswer == "dine-in") {
        tipAmount = mealPrice * TIP_PERCENT;
    }
    else if (orderAnswer == "takeaway") {
        tipAmount = 0; 
    }

    // Calculate tax amount
    taxAmount = mealPrice * TAX_PERCENT;

    // Calculate total change for the meal (including tax and tip, if any)
    total = mealPrice + taxAmount + tipAmount;

    // Print the results
    cout << "------------------------------------------------------" << endl;
    cout << "Meal Price: $" << mealPrice << endl;
    cout << "Tax: $" << taxAmount << endl;
    cout << "Tip Amount: $" << fixed << setprecision(2) << tipAmount << endl;
    cout << "Total Due: $" << fixed << setprecision(2) << total << endl;
    cout << "------------------------------------------------------" << endl;

    return 0;
    }
