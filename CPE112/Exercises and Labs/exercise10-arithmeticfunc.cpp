#include <iostream>
#include <cmath>
using namespace std;

//initialization
int addition = 0,
    subtraction = 0,
    multiplication = 0,
    division = 0;
int x, y;

//functions
int add(int a, int b) {
    return a + b;
    cout << "\nSum is " << a + b << endl;
}

int sub(int a, int b) {
    return  a - b;
    cout << "\nDifference is " << subtraction << endl;
}

int mul(int a, int b) {
     return a * b;
    cout << "\nProduct is " << multiplication << endl;
}

float div(float a, float b) {
    return(x/y);
}

int main() {
    //input
    cout << "Kindly input two numbers: ";
    cin >> x >> y;

    //functions
   addition = add(x,y);
   subtraction = sub(x,y);
   multiplication = mul(x,y);
    float x = x; float y = y;
    float division = div(x,y);
        cout << "\nSum is " << addition << endl;
        cout << "\nDifference is " << subtraction << endl;
        cout << "\nProduct is " << multiplication << endl;
        cout << "\nQuotient is " << division << endl;

return 0;
}