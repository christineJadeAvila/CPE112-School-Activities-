#include <iostream>
#include "menu.h"
using namespace std;


//initialization
    int first[4] = {};
    int second[4] = {};
    int third[4] = {};

int main() {

    cout << "The program will solve for the systems of linear equation using Cramer's Rule.\n\n";
    cout << "In this program, we will solve for the values of x, y, and z using determinants\n";
    cout << "This is the standard equation:\n ";
    cout << "\tA1x + B1y + C1z = D1\n";
    cout << "\tA2x + B2y + C2z = D2\n";
    cout << "\tA3x + B3y + C3z = D3\n";

    //for first linear
    cout << "\nFirst Linear Equation: " << endl;
    cout << "Enter Values for A1: ";
    cin >> first[0];
    cout << "Enter values for B1: ";
    cin >> first[1];
    cout << "Enter values for C1: ";
    cin >> first[2];
    cout << "Enter values for D1: ";
    cin >> first[3];

    //for second linear
    cout << "\nSecond Linear Equation: " << endl;
    cout << "Enter Values for A2: ";
    cin >> second[0];
    cout << "Enter values for B2: ";
    cin >> second[1];
    cout << "Enter values for C2: ";
    cin >> second[2];
    cout << "Enter values for D2: ";
    cin >> second[3];

    //for third linear
    cout << "\nThird Linear Equation: " << endl;
    cout << "Enter Values for A3: ";
    cin >> third[0];
    cout << "Enter values for B3: ";
    cin >> third[1];
    cout << "Enter values for C3: ";
    cin >> third[2];
    cout << "Enter values for D3: ";
    cin >> third[3];

    int D1[3][3] = {
        {first[0], first[1], first[2]},
        {second[0], second[1], second[2]},
        {third[0], third[1], third[2]}
    };

    cout << "\nThis is the standard equation:" << endl;
    cout << "\t" << first[0] << "x" << " + " << first[1] << "y" << " + " << first[2] << "z" << " = " << first[3] << endl;
    cout << "\t" << second[0] << "x" << " + " << second[1] << "y" << " + " << second[2] << "z" << " = " << second[3] << endl;
    cout << "\t" << third[0] << "x" << " + " << third[1] << "y" << " + " << third[2] << "z" << " = " << third[3] << endl;
    
    cout << "\nThis is the matrix for the determinant." << endl;
    cout << "D =  ";
     for (int row = 0; row < 3; ++row) {
        for(int col = 0; col < 3; ++col) {
            cout << "\t" << D1[row][col];
        }
        cout << "\n";
    }

    cout << "\nFinding determinant:\n";
    cout << "The determinant is " ;




    // solve for x, y, z; 
    Values();
}