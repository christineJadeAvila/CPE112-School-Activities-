#include <iostream>
using namespace std;

void Values() {
    char letter; 

    int x, y, z; 
    int Dx, Dy, Dz, D;
    menu:
    cout << "\n\nSolve for the value of: \n";
    cout << "[a] x" << endl;
    cout << "[b] y" << endl;
    cout << "[c] z" << endl;

    cout << "\nKindly select the corresponding letter: ";
    cin >> letter;

    switch(letter) {
        case 'a': 
            cout << "Find the value of x: " << endl;
            cout << "x = Dx / D" << endl;
            cout << "The Dx is "; cin >> Dx;
            cout << "The D is "; cin >> D;
        
            x = Dx / D;

            cout << "X is " << x;


            break;
        case 'b':
            cout << "Find the value of y: " << endl;
            cout << "y = Dy / D" << endl;
            cout << "The Dy is "; cin >> Dy;
            cout << "The D is "; cin >> D;
        
            y = Dy / D;

            cout << "Y is " << y;

            break;
        case 'c':
            cout << "Find the value of z: " << endl;
            cout << "y = Dz / D" << endl;
            cout << "The Dz is "; cin >> Dz;
            cout << "The D is "; cin >> D;
        
            z = Dz / D;

            cout << "Z is " << z;
            break;
        default: 
            cout << "Wrong Input!!!";
            goto menu;
    }
}