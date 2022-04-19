#include <iostream>
#include <cmath> 
using namespace std;

void prime(int x) {
    bool Prime = true;
    for (int i = 2; i <= x/2; i++) {
        if (x % i == 0) {
            cout << x << " is not a prime number. \n\n";
            Prime = false;
            break;
        }
    } if (Prime) {
        cout << x << " is a prime number.\n\n";
    }
    system("pause");
    system("cls");
}

void oddEven(int x) {
    if (x % 2 == 0) {
        cout << x << " is an even number. \n\n";
    } else {
        cout << x << " is an odd number. \n\n";
    }
    system("pause");
    system("cls");
}

void palindrome(int x) {
    int d, reverse = 0;

    for(int j = x; j != 0;) {
        d = j%10;
        reverse = (reverse*10) + d;
        j = j / 10;
    } 

    if(reverse == x) {
        cout << x << " is a palindrome" << endl;
    } else {
        cout << x << " is not a palindrome" << endl;
    }

    system("pause");
    system("cls");
}

void armstrong(int x){
    int d,k, digit, armstrong = 0, count = 0;

    for (int i = x; i != 0;) {
        d = i % 10;
        count++;
        i = i / 10;
    }

    cout << "\n****" << count << endl;

    for (int k = x; k != 0;) {
        digit = k % 10; 
        armstrong = armstrong + pow(digit, count);
        k = k / 10;
    } if (armstrong == k) {
        cout << x << " is an armstrong number. " << endl;
    } else { 
        cout << x << " is not an armstrong number " << endl;
    }

system("pause");
system("cls");

}

int main() {
    menu: 

    char select;
    int num;

    cout << "MENU" << endl;
    cout << "[a] Check for prime" << endl;
    cout << "[b] Check for odd or even" << endl;
    cout << "[c] Check for palindrome" << endl;
    cout << "[d] Check for armstrong" << endl;
    cout << "[e] Exit" << endl;

    cout << "Enter the letter of your choice: ";
    cin >> select;

    switch(select) {

        case 'a': 
    
            cout << "\n\nCHECK FOR PRIME." << endl;
            cout << "Enter a positive number: " << endl;
            cin >> num;

            //1 and 0
            if( num <= 1 ) {
                cout << "Invalid input! Enter a number which is greater than 1. " << endl;
                system("pause");
                system("cls");
                goto menu;
            } else {
                prime(num);
                goto menu;
            }
        break;

        case 'b': 
         
            
            cout << "\n\nCHECK FOR ODD OR EVEN." << endl;
            cout << "Enter a positive number: " << endl;
            cin >> num;
            
            if( num <= 1 ) {
                cout << "Invalid input! Enter a number which is greater than 1. " << endl;
                system("pause");
                system("cls");
                goto menu;
            } else {
                oddEven(num);
                goto menu;
            }
        
        break;

        case 'c':
            
            
            cout << "\n\nCHECK FOR PALINDROME." << endl;
            cout << "Enter a positive number: " << endl;
            cin >> num;
            
            if( num <= 1 ) {
                cout << "Invalid input! Enter a number which is greater than 1. " << endl;
                system("pause");
                system("cls");
                goto menu;
            } else {
                palindrome(num);
                goto menu;
            }

        case 'd':
            
            cout << "\n\nCHECK FOR ARMSTRONG." << endl;
            cout << "Enter a positive number: " << endl;
            cin >> num;
            
            if( num <= 1 ) {
                cout << "Invalid input! Enter a number which is greater than 1. " << endl;
                system("pause");
                system("cls");
                goto menu;
            } else {
                armstrong(num);
                goto menu;
            }
        case 'e':
            exit(0);


    }


}