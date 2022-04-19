#include <iostream>
using namespace std;

int main() {


    //getting natural numbers 1 - 10
    cout << "The Natural numbers are: \n\t";
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
    }

    //getting natural numbers 1 - 10 and their sum
    int sum=0;
    cout << "\n\nThe Natural numbers are: \n\t";
    for(int i = 1; i <= 10; i++) {
        cout << i << " ";
        sum = sum + i;
    } cout << "\n\nThe sum: " << sum;

    //get the n terms and natural number and their sum
    int n, sum1 = 0;
    cout << "\n\nInput a positve number ";
    cin >> n;
    cout << "\n\nThe natural numbers are: \n\t";
    for (int i = 1; i <= n; i++) {

        cout << i << " ";
        sum1 = sum1 + i;

    } cout << "\n\nThe sum: " << sum1;

    


}