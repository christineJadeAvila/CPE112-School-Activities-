#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //initialization
    int num;
    int multable[11][11];

    int originalNum, 
        remainder, 
        n=0, 
        result=0, 
        power; 

    menu:
    cout << "Please input an integer number: ";
    cin >> num;

    cout << "________________________________" << endl;
    cout << "MULTIPLICATION TABLE" << endl;
    cout << "--------------------------------" << endl;

    for(int row = 0; row < num + 1; ++row) {
        for(int column = 1; column < 11; ++column) {
            multable[row][column] = column * row;
            cout << column << " X " << row << " = " << multable[row][column] << endl;
          
    } 
    }

        cout << "_________________________________" << endl;
    }
   
   
    goto menu;

    return 0;
}