#include <iostream>
#include <string>
using namespace std;

int main() {
    //Initialization
    string name, gender, address, course;
    int yearLevel, age;

    //Input
    cout << "PLease input the following information about yourself: \n";
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Gender: ";
    cin >> gender;
    cout << "Address: ";
    cin>>address;
    getline(cin, address);
    cout << "Year Level: ";
    cin >> yearLevel;
    cout << "Course: "; 
    cin>>course;
    getline(cin, course); 
    
    //output
    cout << " \n\n SAVED!" << endl;
   
    cout << "\n\n**YOUR INFORMATION** \n\n";
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Address: " << address << endl;
    cout << "Year Level: " << yearLevel << endl;
    cout << "Course: "<< course << endl;

    return 0;


}