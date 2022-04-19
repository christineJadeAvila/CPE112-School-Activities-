#include <iostream>
using namespace std;

int main () {
    //initialization
    int hour, rateperhour, pay;

    //input
    menu:
    cout << "Kindly input hours: "; cin >> hour;
    cout << "Kindly input rate per hour: "; cin >> rateperhour;

    //process
    if ( hour > 25 ) {
        pay = hour * ( rateperhour * 1.45 );
    } else if (hour > 10 && hour < 25 ) {
        pay = hour * ( rateperhour * 1.25 );
    } else if ( hour < 10 ) {
        pay = hour * rateperhour;
    } 
    
    //output
    cout << "\nYour overtime pay is: " << pay << endl;
    goto menu;
}