# include <iostream>
#include <iomanip> // 2 decimal places result
using namespace std;

int main () {
  // Set up variables 
  string first_name, last_name, full_name; // hold customer's name
  string product = "mints"; // holds product name
  double cost_each = 0.99;
  int amount_purchased;
  double total_cost; 

  // Greet the customer
  cout << "Welcome to our " << product << " store." << endl;
  cout << "What's your first name? ";
  cin >> first_name;
  cout << "What's your last name? ";
  cin >> last_name;
  full_name = first_name + " " + last_name;
  cout << "Nice to meet you " << full_name << endl;
  
  // Ask how much they'd like to purchase
  cout << "How many " << product << " would you like today? ";
  cin >> amount_purchased;
  
  // Calculate total price
  total_cost = amount_purchased * cost_each;

  // Formatting result 
  cout << setprecision (2) << fixed;
    
  // Give the result
  cout << "For " << amount_purchased << " " << product << endl;
  cout << "That will be: $" << total_cost << endl;
  cout << "Thank you for shopping with us!" << endl;
  
  return 0; // Check for errors. 0 = Good
}
