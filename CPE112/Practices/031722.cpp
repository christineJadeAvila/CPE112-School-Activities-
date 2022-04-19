#include <iostream>
#include <cmath>
#include "Header.h"
using namespace std;

int main() {
    //initialization
    int selected;
    
    menu:
    cout << "Please input an integer number: ";
    cin >> selected;
    
    multable(selected);

    goto menu;

    return 0;
}