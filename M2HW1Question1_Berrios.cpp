/*
CSC 134
M2HW1 Question 1
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
