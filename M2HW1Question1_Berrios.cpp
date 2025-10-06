/*
CSC 134
M2HW1 Question 1- Gold Tier
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables
string firstName, lastName, userName;
string enterInfo = "Enter the amount you would like to ";
double initialAccountBalance, depositAmount, withdrawalAmount, finalAccountBalance;
string accountNumber = "01279864235";

// Ask for user's first name
cout << "Enter the user's first name: ";
cin >> firstName;

// Ask for user's last name
cout << "Enter the user's last name: ";
cin >> lastName; 

// Set user's name 
userName = firstName + " " + lastName; 

// Ask for starting account balance
cout << "Enter the starting account balance: $";
cin >> initialAccountBalance;

// Ask for deposit amount
cout << enterInfo <<  "deposit into your account: $";
cin >> depositAmount;

// Ask for withdrawal amount
cout << enterInfo << "withdraw from your account: $";
cin >> withdrawalAmount;

// Calculate the final account balance
finalAccountBalance = initialAccountBalance + depositAmount - withdrawalAmount; 

// Print the results
cout << "-----------------------------------------------------------" << endl;
cout << "Here is your account information." << endl;
cout << "Account Name: " << userName << endl;
cout << "Account Number: " << accountNumber << endl;
cout << fixed << setprecision(2);
cout << "Final Account Balance: $" << finalAccountBalance << endl;
cout << "-----------------------------------------------------------" << endl;

 
return 0;
}

//----------------------------------------------------------------------------------------------------------------------------//

/*
CSC 134 
M2HW Question 2 - Gold Tier
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables
double lengthCrate, widthCrate, heightCrate, volumeCrate;
double costCrate, chargeCrate, profitCrate;
double COST_PER_CUBIC_FEET = 0.3;
double CHARGE_PER_CUBIC_FEET = 0.52;

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

//----------------------------------------------------------------------------------------------------------------------------//

/*
CSC 134
M2HW Question 3- Gold Tier
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main() {

// Declare variables
int quantityPizza, slicesPizza, numberVisitors, visitorConsumption,totalSlices, leftoverPizza;
const int VISITOR_EATING_RATE = 3;

// Ask how many pizzas you order
cout << "How many pizzas will you order? ";
cin >> quantityPizza;

// Ask how many slices per pizza
cout << "How many slices per pizza? "; 
cin >> slicesPizza;

// Calculate total slices of pizzas
totalSlices = slicesPizza * quantityPizza;

// Ask how many visitors are coming?
cout << "How many visitors, including yourself, are coming? ";
cin >> numberVisitors;

// Calculate the total number of slices of pizza consumed by the visitors
visitorConsumption = numberVisitors * VISITOR_EATING_RATE;

//Calculate leftover pizza slices
leftoverPizza = totalSlices - visitorConsumption;

/*
Set up If-Then condition to display leftover pizza 
slices if there aren't enough leftover
*/  

if (leftoverPizza <= 0) {
    cout << "There are no more slices left over" << endl;
} else if (leftoverPizza > 0) {
    cout << "Number of leftover pizza slices: " << leftoverPizza << endl;
}


return 0;
}

//----------------------------------------------------------------------------------------------------------------------------//

/*
CSC 134
M2HW Question 4 - Gold Tier
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

// Declare variables
string letsGo, school, team, cheerOne, cheerTwo;

// Assign values to each string
letsGo = "Let's go";
school = "FTCC";
team = "Trojans"; 
cheerOne = letsGo + " " + school; 
cheerTwo = letsGo + " " + team;

// Display results
cout << cheerOne << endl;
cout << cheerOne << endl;
cout << cheerOne << endl;
cout << cheerTwo << endl; 
cout << " " << endl;

return 0;
}

//----------------------------------------------------------------------------------------------------------------------------//
