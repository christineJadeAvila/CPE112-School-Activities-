/* Make a c++ program that will ask the user to input a 
positive integer number and the program will identify
if the inputted number is an odd or even number */

#include <iostream>
using namespace std;

int main() {
    //initialization
    int number;

    //Input
    cout << " Please input a positive integer number: ";
    cin >> number;

    //Process
    if (number % 2 == 0 ) {
        cout << " Inputted Number is EVEN "; //output
    } else {
        cout << " Inputted Number is ODD "; //output
    }

    return 0;

}