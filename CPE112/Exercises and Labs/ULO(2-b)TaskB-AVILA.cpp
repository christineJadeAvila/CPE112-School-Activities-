#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //initialization
    char options;
    int perimeterOption;
    float perimeter,
          area,
          surfaceArea;

    //output MAIN MENU
    mainMenu:
    cout << "Main List Option" << endl;
    cout << "\n\t[A] Perimeter" << endl;
    cout << "\t[B] Area" << endl;
    cout << "\t[C] Surface Area" << endl;
    cout << "\t[D] Exit" << endl;

    //input 
    cout << "\nEnter Option: "; cin >> options;

    //process
    switch(options) {
        case 'A': 
            //output SUB MENU for PERIMETER 
            perimeterMenu:
            cout << "\n\t\tPerimeter" << endl;
            cout << "\t     Geometric Figure" << endl; 
            cout << "[1] Square" << endl;
            cout << "[2] Rectangle" << endl;
            cout << "[3] Back to Main List of Options." << endl;

            //input
            cout << "\nEnter Option: "; cin >> perimeterOption;

            switch (perimeterOption) {
                case 1:
                    float sideMeasurement;

                    //SQUARE
                    //Input
                    cout << "\t\tSquare" << endl;
                    cout << "\nEnter side measurement of the square: "; 
                    cin >> sideMeasurement;

                    //process
                    perimeter = 4 * sideMeasurement;

                    //output
                    cout << "\nThe perimeter of a square with a side measurement " << endl;
                    cout << "\n\t\tof " << sideMeasurement << " inches" << endl;
                    cout << "\n\t\tis " << perimeter << " inches" << endl;

                    system("pause");
                    system("cls");
                    goto perimeterMenu;
                     
                    break;
                case 2:
                    //initialization
                    float length, width;

                    //rectangle
                    //input
                    cout << "\t\tRectangle" << endl;
                    cout << "\nEnter length measurement of the rectangle: "; 
                    cin >> length; 
                    cout << "Enter width measurement of the rectangle: "; 
                    cin >> width; 
                    //process
                    perimeter = 2 * (length + width);

                    //output
                    cout << "\nThe perimeter of a rectangle with a length measurement " << endl;
                    cout << "\n\t\tof " << length << " inches" << endl;
                    cout << "\n\t\tand with a width measurement " << endl;
                    cout << "\n\t\tof " << width << " inches" << endl;
                    cout << "\n\t\tis " << perimeter << " inches" << endl;
                    
                    system("pause");
                    system("cls");
                    goto perimeterMenu;
                    break;
                case 3:
                    system ("pause");
                    system ("cls");
                    goto mainMenu;
                    break;
                
            }
            break;
        case 'B':
            //initialization
            int areaOption;

            //output SUB MENU for AREA
            areaMenu:
            cout << "\n\t\tArea" << endl;
            cout << "\t     Geometric Figure" << endl; 
            cout << "[1] Triangle" << endl;
            cout << "[2] Trapezoid" << endl;
            cout << "[3] Circle" << endl;
            cout << "[4] Back to Main List of Options." << endl;

            //input
            cout << "Enter Option: "; cin >> areaOption;

            switch(areaOption) {
                case 1:
                    //initialization
                    int baseArea,
                        height;
                    
                    //TRIANGLE 
                    //input
                    cout << "\n\t\tTriangle" << endl;
                    cout << "\nEnter base measurement of the triangle: "; cin >> baseArea;
                    cout << "Enter height measurement of the triangle: "; cin >> height;

                    //process
                    area = (baseArea * height) / 2;

                    //output 
                    cout << "\nThe area of the triangle with a base measurement " << endl;
                    cout << "\n\t\tof " << baseArea << " inches" << endl;
                    cout << "\n\t\tand with a height measurement " << endl; 
                    cout << "\n\t\tof " << height << " inches" << endl;
                    cout << "\n\t\tis " << area << " square meters" << endl;

                    system("pause");
                    system("cls");
                    goto areaMenu;
                    
                    break;
                case 2:
                    //initialization
                    int base1, base2;
                    
                    //TRAPEZOID
                    //Input
                    cout << "\n\t\tTrapezoid" << endl;
                    cout << "\nEnter base 1 measurement of the trapezoid: "; cin >> base1;
                    cout << "Enter base 2 measurement of the trapezoid: "; cin >> base2;
                    cout << "Enter height measurement of the trapezoid: "; cin >> height;

                    //process
                    area = 0.5 * (base1 + base2) * height;

                    //output
                    cout << "\nThe area of the trapezoid with a base 1 measurement " << endl;
                    cout << "\n\t\tof " << base1 << " inches" << endl;
                    cout << "\n\t\tand with a base 2 measurement " << endl; 
                    cout << "\n\t\tof " << base2 << " inches" << endl;
                    cout << "\n\t\tand height of "<< height << "inches" << endl;
                    cout << "\n\t\tis " << area << " square unit" << endl;

                    system("pause");
                    system("cls");
                    goto areaMenu;
                    break;
                case 3: 
                    //initialization
                    int radius;
                    
                    //CIRCLE
                    //Input
                    cout << "\n\t\tCircle " << endl;
                    cout << "\nEnter radius measurement of the circle: "; cin >> radius;

                    //process
                    area = M_PI * (radius * radius);

                    //output
                    cout << "\nThe area of a circle with a radius measurement " << endl;
                    cout << "\n\t\tof " << radius << " radius" << endl;
                    cout << "\n\t\tis " << area << " radius squared" << endl;

                    system("pause");
                    system("cls");
                    goto areaMenu;
                    break;
                case 4:
                    system("pause");
                    system("cls");
                    goto mainMenu;
                    break;
            }   
            break;
        case 'C':
            //initialization
            int surfaceAreaOption;

            //output SUB MENU for SURFACE AREA
            surfaceAreaMenu:
            cout << "\t\tSurface Area" << endl;
            cout << "\t     Geometric Figure" << endl; 
            cout << "[1] Cube" << endl;
            cout << "[2] Cylinder" << endl;
            cout << "[3] Sphere" << endl;
            cout << "[4] Back to Main List of Options." << endl;

            //input
            cout << "Enter Option: "; cin >> surfaceAreaOption;
            switch(surfaceAreaOption) {
                case 1:
                    //initialization
                    int length;

                    //CUBE
                    //input
                    cout << "\t\tCube" << endl;
                    cout << "\nEnter length measurement of the cube: "; 
                    cin >> length; 

                    //process
                    surfaceArea = 6 * (length * length);

                    //output
                    cout << "\nThe surface area of a cube with a side length measurement " << endl;
                    cout << "\n\t\tof " << length << " inches" << endl;
                    cout << "\n\t\tis " << surfaceArea << " square unit" << endl;

                    system("pause");
                    system("cls");
                    goto surfaceAreaMenu;
                    
                    break;
                case 2: 
                    int radius, height;
                    
                    //CYLINDER
                    //input
                    cout << "\t\tCylinder" << endl;
                    cout << "\nEnter radius measurement of the cylinder: "; 
                    cin >> radius; 
                    cout << "Enter height measurement of the cylinder: "; 
                    cin >> height; 

                    //process
                    surfaceArea = 2*(M_PI*(radius * radius)) + 2*(M_PI*(radius * height));

                    //output
                    cout << "\nThe surface area of a cylinder with a radius measurement " << endl;
                    cout << "\n\t\tof " << radius << " radius" << endl;
                    cout << "\n\t\tand with a height measurement " << endl; 
                    cout << "\n\t\tof " << height << " inches" << endl;
                    cout << "\n\t\tis " << surfaceArea << " square unit" << endl;

                    system("pause");
                    system("cls");
                    goto surfaceAreaMenu;
                    
                    break;
                case 3:
                    //SPHERE
                    //input
                    cout << "\t\tSphere" << endl;
                    cout << "\nEnter radius measurement of the sphere: "; 
                    cin >> radius;

                    //process
                    surfaceArea = 4*(M_PI*(radius * radius));

                    //output
                    cout << "\nThe surface area of a sphere with a radius measurement " << endl;
                    cout << "\n\t\tof " << radius << " radius" << endl;
                    cout << "\n\t\tis " << surfaceArea << " radius squared" << endl;

                    system("pause");
                    system("cls");
                    goto surfaceAreaMenu;
                    
                    break;
                case 4:
                    system("pause");
                    system("cls");
                    goto mainMenu;
                    break;

            }
            break;
        case 'D':
            exit(0);
            break;
        default: 
            cout << "\nWrong Input! Please input capital letter [A], [B], and [C], or [D]" << endl;
            system ("pause");
            system ("cls");
            goto mainMenu;
    }

return 0;

}
