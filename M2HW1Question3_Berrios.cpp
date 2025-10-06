/*
CSC 134
M2HW Question 3
michaelberrios90
10/5/2025
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int mmain(){

// Declare variables
int quantityPizza, slicesPizza, numberVisitors, visitorConsumption, leftoverPizza;
const int VISITOR_EATING_RATE = 3;

// Ask how many pizzas you order
cout << "How many pizzas will you order? ";
cin >> quantityPizza;

// Ask how many slices per pizza
cout << "How many slices per pizza? "; 
cin >> slicesPizza;

// Ask how many visitors are coming?
cout << "How many visitors, including yourself, are coming? ";
cin >> numberVisitors;

// Calculate the total number of slices of pizza consumed by the visitors
visitorConsumption = numberVisitors * VISITOR_EATING_RATE;

//Calculate leftover pizza slices
leftoverPizza = slicesPizza - visitorConsumption;

// Print final results
cout << "Number of pizza slices leftover: " << leftoverPizza << endl;

return 0;
}
