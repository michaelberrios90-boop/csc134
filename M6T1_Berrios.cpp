/*
CSC 134
M6T1 - Loops and Arrays
michaelberrios90
12/3/2025
*/

#include <iostream>
#include <iomanip>
using namespace std;    

//Function Declarations
void method1();
void method2();

int main()
{
    // Count # of cars per day
    method1();
    method2();
    return 0;
}

//Function definitions
void method1()
{   
    // Method 1 - No arrays
    cout << "Enter the number of cars passing through per day" << endl;
    cout << "Day 0 = Monday, Day 4 = Friday" << endl;
    //Declare variables
    int SIZE = 5;
    int count = 0;
    int cars_today;
    int cars_total= 0;
    double cars_avg = 0;

    //While loop to enter the # of cars per day
    while (count < SIZE)
    {
        cout << "Day " << count << ": ";
        cin >> cars_today;
        cars_total += cars_today;
        count++;
    }
    
    cout << "Total = " << cars_total << endl;
    cars_avg = (double) cars_total / SIZE;
    cout << "Average = " << cars_avg << endl;
}

void method2()
{
    //Decalre variables
    int SIZE = 5;
    string days[SIZE] = {"M", "T", "W", "Th", "F"};
    int cars[SIZE];
    int cars_total = 0;
    double cars_avg = 0;

    // for loop to enter the # of cars per day
    for (int i = 0; i < SIZE; i++)
    {
        cout << "# on " << days[i] << ": ";
        cin >> cars[i];
    }

    // print results in a table format
    cout << "Days\tCars" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << days[i] << "\t" << cars[i] << endl;
        cars_total += cars[i];
    }

    // Print results
    cars_avg = (double) cars_total / SIZE;
    cout << "Total = " << cars_total << endl;
    cout << "Average = " << cars_avg << endl;
}
