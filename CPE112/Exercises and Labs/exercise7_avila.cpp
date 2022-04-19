#include <iostream>
using namespace std;

int main(){
    //initialization
    int chooseNumber,
        integer=0,
        num1=0,
        num2=0,
        num3=0;

    //input 
    menu:
    cout << "This program will give you these following options. Press the number of your choice " << endl;
    cout << "1. Check if the number is odd or even" << endl;
    cout << "2. Find the largest values" << endl;
    cout << "3. Find the smallest values" << endl;
    cout << "You choose: " ;
    cin >> chooseNumber;

    //process 
    switch (chooseNumber) {
        case 1:
            cout << "\nEnter an integer: ";
            cin >> integer;

            //Validate the input values
            if (integer % 2 == 0 ) {
                cout << integer << " is an even number " << endl;
            } else {
                cout << integer << " is an odd number " << endl;
            }

            system("pause");
            system("cls");
            goto menu;
            break;
            
        case 2: 
            cout << "\nEnter three numbers: " << endl;
            cout << "1st Number: ";
            cin >> num1;
            cout << "\n2nd Number: ";
            cin >> num2;
            cout << "\n3rd Number: ";
            cin >> num3;

            //Validate the input values
            if (num1 >= num2 && num1 >= num3) {
                cout << num1 << " is the largest value" << endl;
            } 
            else if (num2 >= num1 && num2 >= num3) {
                cout << num2 << " is the largest value" << endl;
            }
            else if (num3 >= num1 && num3 >= num2) {
                cout << num3 << " is the largest value" << endl;
            }
            system("pause");
            system("cls");
            goto menu;
            break;

        case 3:
            cout << "\nEnter three numbers: " << endl;
            cout << "1st Number: ";
            cin >> num1;
            cout << "\n2nd Number: ";
            cin >> num2;
            cout << "\n3rd Number: ";
            cin >> num3;

            //Validate the input values
            if (num1 <= num2 && num1 <= num3) {
                cout << num1 << " is the smallest value" << endl;
            } 
            else if (num2 <= num1 && num2 <= num3) {
                cout << num2 << " is the smallest value" << endl;
            }
            else if (num3 <= num1 && num3 <= num2) {
                cout << num3 << " is the smallest value" << endl;
            }
            
            system("pause");
            system("cls");
            goto menu;
            break;

        default: 
            cout << "\nWrong Input!" << endl;
            system("pause");
            system("cls");
            goto menu;
            break;

    }

return 0;

}