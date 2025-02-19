// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

int main()
{
    // Declaring the needed variables
    float gas;
    float mpg;
    // Asking for input
    cout << "How many gallons of gas does your car have?" << endl;
    cin >> gas;
    cout << "How many miles can your car go per gallon?" << endl;
    cin >> mpg;
    // Output
    cout << "Your car will be able to go " << (gas * mpg) << " miles before breaking down, but you should refill before then." << endl;

    return 0;
}