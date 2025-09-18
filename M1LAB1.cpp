/* 
CSC 134
M1LAB - Mint's Sales
michaelberrios90 
9/15/2025
*/

#include <iostream> 
using namespace std; 

int main() {
// This program acts as a storefront
// Set up our variables
string item_name = "mints"; 
int number_of_items = 20;
double cost_each = 0.99;
double total_cost; 
// Greet the customer
cout << "Welcome to the " << item_name << " store."<< endl;

//Ask for the order
// assume they'll buy everything
cout << "We have " << number_of_items << " " << item_name << endl; 
cout << "Each costs $" << cost_each << endl;

// Calculate the total price 
total_cost = number_of_items * cost_each; 

// Output the results
cout << "To purchase all " << number_of_items  << " will cost $" << total_cost << " total." << endl;
cout << "Thank you for shopping with us!" << endl; 
    
return 0; // no errors
}
