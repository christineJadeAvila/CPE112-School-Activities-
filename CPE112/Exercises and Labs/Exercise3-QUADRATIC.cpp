#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c,
          root1, 
          root2, 
          formula1, 
          denominator;

    cout << "Input coefficient: ";
    cin >> a >> b >> c;

    //process

    formula1= sqrt(b*b - 4 * a * b);
    denominator = 2 * a ;

    root1 = (-b + formula1) / denominator;
    root2 = (-b - formula1) / denominator;

    cout << "ROOT1: " << root1 << "\nROOT2: " << root2 << endl;

    return 0;
}