#include <iostream>
#include <cmath>
using namespace std;
void Armstrong();
void multable(int a) {
    int num = a;
    
    int multable[11][11];
    int orgNum;
    int armstrong;
    int power;
    int result;
    int remainder;
    int multab;

    cout << "--------------------------------" << endl;
    cout << "MULTIPLICATION TABLE" << endl;
    cout << "--------------------------------" << endl;

    for(int row = 0; row <= num; ++row) {
        for(int column = 1; column < 11; ++column) {
            multab = column * row;
        
            cout << column << " X " << row << " = " << multable[row][column] << endl;

    }

        cout << "----------------------------------" << endl;

    }

    Armstrong(multab);
    cout << multab;



}

void Armstrong(int num) {
    int number,
        originalNumber,
        remainder,
        n = 0,
        result = 0,
        power;

    number = num;
    originalNumber = number;

    while(originalNumber != 0) { // for(int n = 0; n < originalNumber; n++) { 
        originalNumber /= 10;    // originalNumber /= 10;
        n++;
    }

    originalNumber = number;

    while(originalNumber != 0) {
        remainder = originalNumber % 10;
        
        power = round(pow(remainder, n));
        result = power; 
    }

    if (result == number) {
        cout << number;
    } else {
        cout << number;
    }
}