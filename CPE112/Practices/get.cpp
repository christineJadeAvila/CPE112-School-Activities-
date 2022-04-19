#include <iostream>
#include <conio.h> 
#include <stdio.h>

using namespace std;

int main() {
  
cout << "Please input values that will be stored in the array: \n";
int esc = getch();

int a[1000], i = 0, n = 0;

while(esc != 27) {
    cin >> a[i];
    i++;
    n++;
    esc = getch();
}

if(n == 0) {
    cout << "There is no inputted value. cant identify l and s num";
    exit(0);
} else if (n == 1) {
    cout << a[0] << "Hence";
    cout << a[0];
    cout << a[0];
    exit(0);
} else {
    
}










}

