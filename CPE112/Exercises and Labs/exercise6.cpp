/* Make a c++ program that will ask the user to select a specific arithmetic operation based on the options
that will be shown in the program. Then, once the user */

#include <iostream>
using namespace std;

int main() {
    //initialization
    float a, b;
    int select;
    float sum=0, 
          diff=0,   
          prod=0, 
          quo=0,
          mod=0;

    //input
    menu:
    cout << "5 ARITHMETIC OPERATIONS" << endl;
    cout << "Kindly press the number that corresponds the operation of your choice." << endl;
    cout << "[1] Addition" << endl;
    cout << "[2] Subtraction" << endl;
    cout << "[3] Multiplication" << endl;
    cout << "[4] Division" << endl;
    cout << "[5] Modulus" << endl;
    cout << "[6] Exit" << endl;
    cout << "You've selected : ";
    cin >> select;


    //process
    if (select == 1) {
        cout << "Addition";
        cout << "\n\nPlease input two positive values." << endl;
            cout << "First Number: ";
            cin >> a;
            cout << "Second Number";
            cin >> b;

        //Validate the input values
        if(a < 0 && b < 0) {
            cout << "Wrong Input!";
            exit(0);
        }
        else {
            sum = a + b;
            cout << "Sum is " << sum << endl;
            system("pause");
            system("cls");
            goto menu;

        }
    } else if (select == 2){
        cout << "Subtraction";
        cout << "\n\nPlease input two positive values." << endl;
            cout << "First Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;

        //Validate the input values
        if(a < 0 && b < 0) {
            cout << "Wrong Input!";
            exit(0);
        } 
        else {
            diff = a - b;
            cout << "Difference is " << diff << endl;
            system("pause");
            system("cls");
            goto menu;
        }
    } else if (select == 3){
        cout << "Multiplication";
        cout << "\n\nPlease input two positive values." << endl;
            cout << "First Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;

        //Validate the input values
        if(a < 0 && b < 0) {
            cout << "Wrong Input!";
            exit(0);
        } 
        else {
            prod = a * b;
            cout << "Product is " << diff << endl;
            system("pause");
            system("cls");
            goto menu;
        }
    } else if (select == 4){
        cout << "Division";
        cout << "\n\nPlease input two positive values." << endl;
            cout << "First Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;

        //Validate the input values
        if(a < 0 && b < 0) {
            cout << "Wrong Input!";
            exit(0);
        } 
        else {
            quo= a / b;
            cout << "Quotient is " << quo << endl;
            system("pause");
            system("cls");
            goto menu;
        }
    } else if (select == 5){
        cout << "Modulus";
        cout << "\n\nPlease input two positive values." << endl;
            cout << "First Number: ";
            cin >> a;
            cout << "Second Number: ";
            cin >> b;

        //Validate the input values
        if(a < 0 && b < 0) {
            cout << "Wrong Input!";
            exit(0);
        } 
        else {
            int x=a, y=b;
            mod = x % y;
            cout << "Modulus is " << mod << endl;
            system("pause");
            system("cls");
            goto menu;
        }
    } else if (select == 6) {
        cout << "Thank you have a nice day!";
        exit(0);
    } else {
        cout << "Wrong Input!";
        system("pause");
        system("cls");
        goto menu;
    }

    return 0;
}   