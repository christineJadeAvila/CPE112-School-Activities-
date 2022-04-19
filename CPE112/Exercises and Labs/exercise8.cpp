#include <iostream>
using namespace std;

int main() {
    int palindrome;
    float d, reverse;
    string username;
    string password;

for (int attempts = 0; attempts <= 2; attempts++) {
    cout << "Kindly input your username and password. \n";
    cout << "Username: "; cin >> username;
    cout << "Password: "; cin >> password;

    if (username=="Admin" && password=="asdfg123") {

        cout << "Kindly put a positive integer value: ";
        cin >> palindrome;
        return 0;

            if (palindrome>=0) {
            for(int a=palindrome; a!=0;) {
                d=a%10;
                reverse=(reverse*10)+d;
                a=a/10;
            }
            if (palindrome == reverse ) {
                cout << "This is a palindrome number";
            } else {
                cout << "This is not a palindrome number";
            }
    }
    }else if(attempts <=2) {
        cout << "Unsuccesful Login 2 attempts more";
    } else if (attempts <=1){
        cout << "Unsuccesful Login 1 attempt more";
    }
    }
    cout << "Maximum attempts reached. ";
    
}