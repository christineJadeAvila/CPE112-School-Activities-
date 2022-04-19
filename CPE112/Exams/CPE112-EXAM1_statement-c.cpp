/* Make a c++ program that prompts the user to enter the lengths of the sides a, b, 
and c of a triangle. 

Also, it will ask the user to input the length of the triangular prism that can be formed 
using the 3 sides of the triangle and its length.

The program will should then output the value of the volume of the triangular prism,
the area of the triangle, and the cost of the carpet */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //initialization
    int a, b, c, s, length;
    float area, volume, cost;

    //input 
    cout << "Side a: ";
    cin >>a ;
    cout << "Side b: ";
    cin >> b ;
    cout << "Side c: ";
    cin >> c;
    cout << "Length of the Triangular Prism: ";
    cin >> length;

    //process
    s = (a + b + c)/2; 

    area = sqrt(s*(s-a)*(s-b)*(s-c)); // formula for area of triangle
    volume = area * length; // formula for volume of triangular prism
    cost = area * 1010.85; // 1010.85 is the cost per meter 
    
    //output
    cout << "\nThe Area of the Triangle is  " << area << endl;
    cout << "The Volume of triangular prism is " << volume << endl;
    cout << "The cost of the carpet per square meters is " << cost << " meters" << endl;

return 0;

}