#include <iostream>
using namespace std;

//global initialization
int addition = 0, subtraction = 0, multiplication = 0;
float division = 0;

//functions
int Addition(int a, int b) {
    addition = a + b; 
    cout << "Sum is " << addition << endl;
    return 0;
}
int Subtraction(int a, int b) {
    subtraction = a - b; 
    cout << "Difference is " << subtraction << endl;
    return 0;
}
int Multiplication(int a, int b) {
    multiplication = a * b;
    cout << "Product is " << multiplication << endl;
    return 0;
}
float Division(float a, float b) {
    division = a / b;
    cout << "Quotient is " << division << endl;
    return 0;
}

//Driver
int main() {
    //initialization
    int option, x, y;

    //output options
    menu:
    cout << "Select the operation of your choice." << endl;
    cout << "[1] Addition " << endl;
    cout << "[2] Subtraction " << endl;
    cout << "[3] Multiplication " << endl;
    cout << "[4] Division " << endl;
    cout << "[5] Exit " << endl;
    cout << "Enter Option: "; cin >> option;

    //process
    switch(option) {
        case 1: 
            cout << "\tADDITION\n" << endl;
            cout << "Input two numbers" << endl;
            cout << "First Number: ";
            cin >> x;
            cout << "Second Number: ";
            cin >> y;
            Addition(x, y);

            system("pause");
            system("cls");
            goto menu;
            break;
        case 2:
            cout << "\tSUBTRACTION\n" << endl;
            cout << "Input two numbers" << endl;
            cout << "First Number: ";
            cin >> x;
            cout << "Second Number: ";
            cin >> y;
            Subtraction(x, y);

            system("pause");
            system("cls");
            goto menu;
            break;

        case 3:
            cout << "\tMULTIPLICATION\n" << endl;
            cout << "Input two numbers" << endl;
            cout << "First Number: ";
            cin >> x;
            cout << "Second Number: ";
            cin >> y;
            Multiplication(x, y);

            system("pause");
            system("cls");
            goto menu;
            break;

        case 4:
            cout << "\tDIVISION\n" << endl;
            cout << "Input two numbers" << endl;
            cout << "First Number: ";
            cin >> x;
            cout << "Second Number: ";
            cin >> y;
            Division(x, y);

            system("pause");
            system("cls");
            goto menu;
            break;
        case 5:
            exit(0);
        default:
            cout << "Wrong input! Please try again... " << endl;
            system("pause");
            system("cls");
            goto menu;
            break;
    }

return 0;

}