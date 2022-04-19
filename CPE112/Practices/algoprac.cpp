#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //initialization
    int num, 
        originalNum, 
        remainder, 
        n=0, 
        result=0, 
        power; 
    
    //input
    cout << "Enter an integer: "; cin >> num;

    //process
    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;

    while(originalNum !=0) {
        remainder = originalNum % 10;

        power = round(pow(remainder, n));
        result += power;
        originalNum /= 10;
    }

    if (result == num) {
        cout << num << " is an Arsmtrong Number";
    } else {
        cout << num << " is not an Armstrong Number";
    }

return 0;

}