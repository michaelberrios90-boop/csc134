// CSC 134
// michaelberrios90
// M5HW1 - Q6 Gold Tier
// 11/17/2025
// Program is to create a Main menu to access all other questions of M5HW!.

#include <iostream>
#include <iomanip>
using namespace std;

// Function declarations for Main Menu Q6 
void getM5HW1_Q1();
void getM5HW1_Q2();
void getM5HW1_Q3();
void getM5HW1_Q4();
void getM5HW1_Q5();
void mainMenuQ6();

// Function declarations for M5HW1_Q1 aren't needed since it's all one function

// Function declarations for M5HW1_Q2
double getLength();
double getWidth();
double getHeight();
double getVolume(double length, double width, double height);
void displayData(double volume);

// Function declarations for M5HW1_Q3
int getNumber();
string romanizeNum(int num);
void displayResults(int num, string romanNum);

// Function declarations for M5HW1_Q4
void geoCalcMenu();
void getAreaCircle();
void getAreaRectangle();
void getAreaTriangle();

// Function declarations for M5HW1_Q5
int getSpeed();
int getHoursTraveled();
void distanceTraveledResults(int speedVehicle, int hoursTraveled);

int main ()
{
    //Declare variables
    // keepGoingAnswer needs to be intialized to enter while loop
    int keepGoingAnswer = 1;
    // Main while loop to run program again if user wants to keep going
    while (keepGoingAnswer == 1)
    {
        mainMenuQ6(); // main Menu for Q6 that calls back each prior question from M5HW1
        
        //Ask user if they want to run program again
        cout << "Would you like to run program again?" << endl;
        cout << "Press 1 for yes, 2 for no." << endl;
        cin >> keepGoingAnswer;
    }
    // Final farwell
    cout << "Program ended. Hope to see you soon!";
    return 0;
}

void mainMenuQ6() 
{
    // Declare variables
    int mainMenuChoice;

    // Create menu display with options
    cout << "Main Menu: " << endl;
    cout << "1. Access first question of M5HW1 assignment." << endl;
    cout << "2. Access second question of M5HW1 assignment." << endl;
    cout << "3. Access third question of M5HW1 assignment." << endl;
    cout << "4. Access fourth question of M5HW1 assignment." << endl;
    cout << "5. Access fifth question of M5HW1 assignment." << endl;
    cout << "6. Exit program" << endl;
    cout << "Enter your choice (1-6): ";
    cin >> mainMenuChoice;
    cout << " " << endl;

    // Validation of main menu choice
    while (mainMenuChoice < 1 || mainMenuChoice > 6)
    {
        cout << "Invalid choice. Menu choice must be a number between 1 and 6, inclusive.";
        cout << "Please try again." << endl;
        cout << "Enter your choice (1-6): ";
        cin >> mainMenuChoice;
    }

    // Switch-case structure for main Menu Choice
    switch (mainMenuChoice)
    {
    case 1:
        getM5HW1_Q1();
        break;
    case 2:
        getM5HW1_Q2();
        break;
    case 3:
        getM5HW1_Q3();
        break;
    case 4:
        getM5HW1_Q4();
        break;
    case 5:
        getM5HW1_Q5();
        break;
    case 6:
        cout << "Program exited." << endl;
        break;
    }
}

void getM5HW1_Q1() 
{
    //Declare variables 
    string month1, month2, month3;
    double averageRainfall, totalRainfall, rain1, rain2, rain3;
    double numMonths = 3.0;

    // Ask user for multiple input for each month and its rainfall amount.
    cout << "Enter first month: ";
    cin >> month1;
    cout << "Enter rainfall for first month: ";
    cin >> rain1;
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter rainfall for second month: ";
    cin >> rain2;
    cout << "Enter the third month: ";
    cin >> month3;      
    cout << "Enter rainfall for third month: ";
    cin >> rain3;
        
    // Calculate total rainfall
    totalRainfall = rain1 + rain2 + rain3;
       
    //Calculate avaerage Rainfall
    averageRainfall = (totalRainfall / numMonths); 

    //Print the results
        cout << "The average rainfall for " << month1 << ", ";
        cout << month2 << ", " << "and " << month3;
        cout << " is " << averageRainfall << " inches." << endl;
        cout << " " << endl;
}

void getM5HW1_Q2()
{
    //Declare variables
    double length, width,height, volume;
   
    //Set length variable to the Length Function
    length = getLength();

    //Set up width variable to the Width function
    width = getWidth();

    //Set up height variable to the Height function
    height = getHeight();
    
    //Set up volume vaiable to the Volume function. Passes length,width, and height as parameters
    volume = getVolume(length, width, height);

    //Print the final results using a display function. Passes volume variable as parameter.
    displayData(volume);
}

double getLength() 
{
    double length;
    cout << "Enter the length of the block (in feet): ";
    cin >> length;
        while (length <= 0)
        {
            cout << "Invalid value. No side can be 0 feet or less. Try again." << endl;
            cout << "Enter the length of the block (in feet): ";
            cin >> length;
        }
    return length;
}

double getWidth()
{
    double width;
    cout << "Enter the width of the block (in feet): ";
    cin >> width;
        while (width <= 0)
        {
            cout << "Invalid value. No side can be 0 feet or less. Try again." << endl;
            cout << "Enter the width of the block (in feet): ";
            cin >> width;
        }
    return width;
}

double getHeight()
{
    double height; 
    cout << "Enter the height of the block (in feet): ";
    cin >> height;
        while (height <= 0)
        {
            cout << "Invalid value. No side can be 0 feet or less. Try again." << endl;
            cout << "Enter the height of the block (in feet): ";
            cin >> height;
        }
    return height;
}

double getVolume(double length, double width, double height)
{
    double volume;
    return volume = length * width * height;
}

void displayData(double volume) 
{
    cout << "Volume of block: " << volume << " cubic feet" << endl;
    cout << " " << endl;
}

void getM5HW1_Q3()
{
    // Declare variables
    int num;
    string romanNum;

    // Store returned value of module getNumber() into variable num
    num = getNumber();

    // Store returned value of module romanizeNum() into variable romanNum
    romanNum = romanizeNum(num);

    // Set up display function
    displayResults(num, romanNum);
}

int getNumber()
{
    //Declare variables
    int num;
    // Ask user to enter a number between 1 and 10
    cout << "Enter a number between 1 and 10, inclusive: ";
    cin >> num;
        // Input validation
        while (num < 1 || num > 10)
        {
            cout << "Invalid value. Number can't be less than 1 or greater than 10. Please try again." << endl;
            cout << "Enter a number between 1 and 10, inclusive: ";
            cin >> num;
        }
    return num;  // returns num back as a result of function      
}

string romanizeNum(int num)
{   
    // Declare variable
    string romanNum;
    // Set up switch-case decision structure to pair user's number with it's corresponding roman numeral 
    switch (num)
    {
    case 1:
        romanNum = "I";
        break;
    case 2:
        romanNum = "II";
        break;
    case 3:
        romanNum = "III";
        break;
    case 4:
        romanNum = "IV";
        break;
    case 5:
        romanNum = "V";
        break;
    case 6:
        romanNum = "VI";
        break;
    case 7:
        romanNum = "VII";
        break;
    case 8:
        romanNum = "VIII";
        break;
    case 9:
        romanNum = "IX";
        break;
    case 10:
        romanNum = "X";
        break;
    }
    return romanNum; // return romanNum as a result of function
}

void displayResults(int num, string romanNum)
{
    cout << "The Roman numeral version of " << num << " is " << romanNum << endl; 
}

void getM5HW1_Q4()
{
    geoCalcMenu(); // function for setting up the geo calculator menu
}

void geoCalcMenu() 
{
    //Declare Variables
    int menuChoice;

    //Write out menu text
    cout << "Geometry Calculator" << endl;
    cout << "1. Calculate the Area of a Circle" << endl;
    cout << "2. Calculate the Area of a Rectangle" << endl;
    cout << "3. Calculate the Area of a Triangle" << endl;
    cout << "4. Quit" << endl;
    cout << "Enter your choice (1-4): "; 
    cin >> menuChoice;

    //Validation for user's menu choice
    while (menuChoice <1 || menuChoice >4)
    {
        cout << "Invalid choice. Must pick a number between 1 through 4. ";
        cout << "Please try again." << endl;
        cout << "Enter your choice(1-4): ";
        cin >> menuChoice;
    }
    
    // Switch-case decision structure in regards to user's menu choice
    // first 3 menu options are for one of the area functions 
    // last one is to quit program 
    switch (menuChoice)
    {
    case 1:
        getAreaCircle();
        break;
    case 2:
        getAreaRectangle();
        break;
    case 3:
        getAreaTriangle();
        break;
    case 4: 
        cout << "Program ended." << endl;
        break;
    }
}

void getAreaCircle() 
{
    // Declare variables
    double radius, areaCircle;
    double PI = 3.14159;

    // Ask user for radius of circle
    cout << "Enter the radius of circle: ";
    cin >> radius;

    // Validation of radius input
    while (radius < 0)
    {
        cout << "Radius cannot be less than zero. Please re-enter value." << endl;
        cout << "Enter the radius of circle: ";
        cin >> radius;
    }

    // Calculate the area of circle 
    areaCircle = PI * (radius * radius);

    // Print the results
    cout << "Area of circle: " << areaCircle << endl;
}

void getAreaRectangle()
{
    // Declare variables
    double lengthRectangle, widthRectangle, areaRectangle;

    // Ask user for length of rectangle
    cout << "Enter the length of rectangle: ";
    cin >> lengthRectangle;

    // Validation of rectangle length input
    while (lengthRectangle < 0)
    {
        cout << "Length of rectangle cannot be negative. Please try again." << endl;
        cout << "Enter the length of rectangle: ";
        cin >> lengthRectangle;
    }

    // Ask user for width of rectangle
    cout << "Enter the width of rectangle: ";
    cin >> widthRectangle;
    
    // Validation of width
    while (widthRectangle < 0)
    {
        cout << "Width of rectangle cannot be negative. Please try again." << endl;
        cout << "Enter the width of rectangle: ";
        cin >> widthRectangle;
    }
    
    // Calculate area of rectangle
    areaRectangle = lengthRectangle * widthRectangle;

    // Print the results
    cout << "Area of Rectangle: " << areaRectangle << endl;
}

void getAreaTriangle()
{
    // Declare variables
    double lengthTriBase, heightTriangle, areaTriangle;

    // Ask user for length of triangle's base
    cout << "Enter the length of triangle's base: ";
    cin >> lengthTriBase;

    // Validation of triangle's base length
    while (lengthTriBase < 0)
    {
        cout << "Length of triangle's base cannot be negative. Please try again." << endl;
        cout << "Enter the length of triangle's base: ";
        cin >> lengthTriBase;
    }

    // Ask user for triangle's height
    cout << "Enter the height of triangle: ";
    cin >> heightTriangle;

    // Validation of triangle's height
    while (heightTriangle < 0)
    {
        cout << "Height of triangle cannot be negative. Please try again." << endl;
        cout << "Enter the height of triangle: ";
        cin >> heightTriangle;
    }
    
    // Calculate the area of triangle 
    areaTriangle = lengthTriBase * heightTriangle * 0.5; // std formula for area of triangle. 

    // Print the results
    cout << "Area of Triangle: " << areaTriangle << endl;
}

void getM5HW1_Q5()
{
    // Declare variables
    int speedVehicle, hoursTraveled, distanceTraveled;

    // Store result of getSpeed function into variable speedVehicle
    speedVehicle = getSpeed();

    // Store result of getHoursTraveled into variable hoursTraveled
    hoursTraveled = getHoursTraveled();

    // Print results into distanceTraveled function
    distanceTraveledResults(speedVehicle, hoursTraveled);
}

int getSpeed() 
{   
    // Declare variable
    int speedVehicle;
    // Ask user for the vehicle's speed
    cout << "What is the speed of the vehicle in mph: ";
    cin >> speedVehicle;
    // Validation of vehicle speed input
    while (speedVehicle < 0)
        {
            cout << "Speed cannot be negative. Please try again." << endl;
            cout << "What is the speed of the vehicle in mph: ";
            cin >> speedVehicle;
        }
    return speedVehicle;
}

int getHoursTraveled()
{
    // Declare variable
    int hoursTraveled;
    // Ask user for the hours traveled of vehicle
    cout << "How many hours has the vehicle traveled: ";
    cin >> hoursTraveled;
    // Validation of hours input
    while (hoursTraveled < 1)
    {
        cout << "Hours traveled cannot be less than 1. Please try again." << endl;
        cout << "How many hours has the vehicle traveled: ";
        cin >> hoursTraveled;
    }
    return hoursTraveled;
}

void distanceTraveledResults(int speedVehicle, int hoursTraveled)
{
    // Print the results w/ a loop
    cout << "Hours\tDistance traveled"<< endl;
    cout << "------------------------------" << endl;
    for (int i = 1; i <= hoursTraveled; i++)
    {
        int distanceTraveled = speedVehicle * i;
        cout << i << "\t" << distanceTraveled << endl;
    }
}
