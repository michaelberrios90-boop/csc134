/*
CSC 134 
M3HW Question 1- Gold Tier
michaelberrios90
10/13/2025
*/

#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{

    // Declare variables
    string responseAnswer;

    // Display opening greeting
    cout << "Hello, I'm a C++ program!" << endl;

    // Ask user if they like it
    cout << "Do you like me? Please type yes or no. " << endl;
    cin >> responseAnswer;

    // Set up responseAnswer if-else conditional structure
    if (responseAnswer == "yes") {
        cout << "That's great! I'm sure we'll get along." << endl; }
    else if (responseAnswer == "no") {
        cout << "Well, maybe you'll learn to like me later." << endl; }
    else {
        cout << "If you're not sure...that's OK." << endl;
    }

    return 0;  
}

//-----------------------------------------------------------------------------------------------------------//

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

//-------------------------------------------------------------------------------------------------------------------------------------//


/*
CSC 134
M3HW - Question 3 Gold Tier
michaelberrios90
10/13/2025
*/

# include <iostream>
# include <iomanip>
using namespace std;

int main ()
{
    // Declare Variables
    string marbleChoice;
    int numPick;
    string letsPlay = "Let's play a game! ";

    // Ask user to pick between the red or blue ball
    cout << letsPlay << "There are two marbles: a red one and a blue one. Please pick only one." << endl;
    cin >> marbleChoice;

    // Set up conditional if-else for marble choice
    if (marbleChoice == "red"){
        cout << "Sorry, Game Over!" << endl;
    }
    else {
        cout << "Congrat's! You move onto the second phase!" << endl;
        cout << "Now choose a number between 1 and 100." << endl;
        cin >> numPick;
            if (numPick >= 75 && numPick<= 80) {
                cout << "Good Job! you win!" << endl;
            }
            else {
                cout << "Sorry, You Lose!" << endl;
            }
    }

    return 0;
}

// ---------------------------------------------------------------------------------------------------------------------------------------------------- //

/*
CSC 134 
M3Hw- Question 4 Gold
michaelberrios90
10/13/2025
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <ctime>
using namespace std;

int main() {
    // Declare variables including seed
    int num1, num2, total, additionAnswer;
    int seed = time(0);
    const int MAX = 10; 
    
    // Seed the RNG
    srand(seed);

    // Set and display first and second numbers
    num1 = (rand() % MAX); // 0-9
    cout << "Your first number is " << num1 << endl;
    num2 = (rand() % MAX) ;// 0-9 
    cout << "Your second number is " << num2 << endl;

    // Set total
    total = num1 + num2;

    // Ask user for the sum of both numbers 
    cout << "What is " << num1 << " + " << num2 << "?" << endl;
    cin >> additionAnswer; 
   
    // Set up if-else conditional 
    if (additionAnswer == total) {
        cout << "Correct" << endl;
        cout << " " << endl;
    }
    else {
        cout << "Incorrect" << endl;
        cout << " " << endl;
    }
  
    return 0;
}
