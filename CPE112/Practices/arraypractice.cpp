#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a[10];
    cout << "Enter a number: ";
    for(int i = 0; i <= 10; ++i) {
        cin >> a[i];
    }

    cout << "Numbers are: \n";
    for (int i = 0; i < 10; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}