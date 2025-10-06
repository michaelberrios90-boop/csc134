/*
CSC 134
M2HW Question 3
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
