#include <iostream>
#include <stdlib.h>
#include "headerfile.h"

using namespace std;



int main() {

    int input;


    system("Color F0");

    cout << "Please input an integer number: ";
    cin >> input;
    
    process(input);

return 0;
}