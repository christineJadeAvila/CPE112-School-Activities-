#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //initialization
    double x, y;

    //input
    cout << "Enter value for x: "; cin >> x;

    //process
    y = pow(x, 4) - (5 * pow(x, 3)) + (3 * pow(x, 2)) - (2 * x);

    //output
    cout << "\nThe value of y is: " << y;

return 0;
     



}
