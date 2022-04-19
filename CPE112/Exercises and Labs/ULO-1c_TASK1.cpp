//A program that outputs the overtime pay based on the input of hour and rate per hour

#include <iostream>
using namespace std;

int main(){
    //initializations
    int hours;
    double pay, rate;

    //input
    cout<<"ENTER HOURS: ";
    cin>> hours;
    cout<<"\nENTER RATE PER HOUR: ";
    cin>> rate;


    //process
    if (hours > 25 ) { 
        pay = hours * (rate * 1.45);
    } 
    else if (hours > 10 && hours < 25) {
        pay = hours * (rate * 1.25);
    } 
    else if (hours < 10 ) {
        pay = hours * rate;
    }

    //output 
    cout << "\nYOUR OVERTIME PAY IS " << pay << endl;

    return 0;

}

