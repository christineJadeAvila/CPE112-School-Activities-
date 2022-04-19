#include <iostream>
using namespace std;

int main() {

    //initialization outside the loop
    int num, sum = 0;

    //input 
    cout << "Enter positive number: ";
    cin >> num;
    
    //process
    for (int i = 1; i <= num; ++i) {
        sum += i;
    }

    //output
    cout << "sum is " << sum << endl;

    for (int i = 0; i <= 7; ++i) {
        cout << i << "";
    }

}