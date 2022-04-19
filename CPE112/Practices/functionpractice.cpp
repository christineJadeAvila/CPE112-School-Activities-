#include <iostream>
using namespace std;

void CallMyName() {
    string name;
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello "<< name << endl;
}
void AskMyAge() {
    int age;
    cout << "How old are you? ";
    cin >> age;
    cout << "Nice, you are " << age << " years old! Welcome!" << endl;
}
int Calculator(int a, int b) {
    return a * b;
}
void Form() {
    int a, b, s;

    cout << "Enter numbers: " << endl;
    cin >> a;
    cin >> b;

    s = Calculator(a, b);

    cout << s;
}
void TheForm() {
    CallMyName();
    AskMyAge();
    Form();
}
int main() {
    TheForm();
}