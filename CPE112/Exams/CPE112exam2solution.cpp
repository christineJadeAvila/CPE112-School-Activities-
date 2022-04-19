#include <iostream>
using namespace std;

int main() {
    int x, y, d, upperRange, lowerRange, count = 0, sum;

    cout << "This program will get all the palindrome numbers between a range." << endl;
    cout << "\nLower range: ";
    cin >> lowerRange;
    cout << "Upper range: ";
    cin >> upperRange;

    if (upperRange >= 100 && lowerRange >= 100 && upperRange > lowerRange) {
        
        //identification for the palindrome
        for (int a = lowerRange; a <= upperRange; a++) {

            int reverse = 0;
            for(int b = a; b != 0;) {
                d = b % 10;
                reverse = (reverse * 10) + d;
                b = b / 10;
            } if (reverse == a) {
                cout << a << " ";
                count++;

                if (count == 13) {
                    x = a;
                }
            }
        } if (count == 0) {
            cout << "\nthere is no palindrome value within the range!\n\n\t";
        } if (count >= 13) {
            cout << "The 13th number among these palindrome values is " << x << endl;
            while (x != 0) {
                y = x % 10;
                sum += y;
                x = x / 10;
            }
            cout << "\nThe summation of the digits is " << sum << endl;
        } else {
            cout << "no 16th number";
        }
    } else {
        cout << "wrong input!";
    }
}
