#include <iostream>
using namespace std;

int age, yearLevel;
string name, cs;
string address, course, motto;

void me() {

    cout << "Age: ";
    cin >> age;
    cout << "Address: ";
    cin >> address;
    cout << "Course: ";
    cin >> course;
    cout << "Year Level: ";
    cin >> yearLevel;
    cout << "Motto: ";
    cin >> motto;

}
void output() {

    cout << "\tOUTPUT\n";

    cout << "Name: " << name << endl;
    cout << "Civil Status: " << cs << endl;
    cout << "Age: " << age << endl;
    cout << "Address: " << address << endl;
    cout << "Course: " << course << endl;
    cout << "Year Level: " << yearLevel << endl;
    cout << "Motto: " << motto << endl;


}
int main() {

    cout << "Hello, World!" << endl;
    cout << "This is all about me. " << endl;
    cout << "Kindly enter the following:\n";
    cout << "Name: ";
    cin >> name;

    me();
    
    cout << "Civil Status: ";
    cin>>cs;

    output();

    return 0;

}