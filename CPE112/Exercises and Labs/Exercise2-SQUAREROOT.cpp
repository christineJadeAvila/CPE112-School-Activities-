#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //initialization
    float num1;
    float sqr=0, pow1=0;

    //input 
    cout << "Kindly input a positive number: ";
    cin >> num1;

    //process
    sqr = sqrt(num1);
    pow1 = pow(num1, 3);

    //output
    cout << "The square root of " << num1 << " is " << sqr;
    cout << "The cube of " << num1 << " is " << pow1;

    return 0;
}