#include <iostream>
using namespace std;

//FUNCTION PROTOTYPE
void SearchBySurname();
void SearchById();

//INITIALIZATION
string STUDENT_DATA[6][6] = {
        {"Surname",      "Student ID", "  Calculus", "  English", "  EDP101", "Filipino"},
        {"Santos",       "1122",          "90",         "95",        "89",    "87"},
        {"Apple",        "1223",          "78",         "83",        "70",    "75"},
        {"James",        "3222",          "70",         "78",        "75",    "89"},
        {"Smith",        "3242",          "75",         "80",        "75",    "98"},
        {"Cruz",         "5321",          "70",         "83",        "75",    "81"}
};

string NAME_AND_ID[5][2] = { 
        //NAME:            ID: 
        {"Delo Santos",    "1122"},
        {"Juan Apple",     "1223"},
        {"Smith James",    "3222"},
        {"James Smith",    "3242"},
        {"Dela Cruz",      "5321"}
};
 
//MAIN FUNCTION --- DRIVER
int main() {
    system("Color F0");
    //INITIALIZATION
    int selected;


    //OUTPUT NAME AND ID OF THE STUDENTS
    main_menu:
    cout << "\t\t FIRST YEAR STUDENTS" << endl;
    cout << "-----------------------------------------------------------------------" << endl;
    cout << "\nNAME:\t\t\t\t\t\t\tID NUMBER:" << endl;
    for (int row = 0; row <= 5; row++) {
        for(int column = 0; column <= 1; ++column) {
            cout << NAME_AND_ID[row][column] << "\t\t\t\t\t\t";
        }
        cout << "\n" ;
    }

    //OUTPUT OPTIONS - SURNAME AND ID
    cout << "\n\n\t\t FIND GRADES BY: " << endl;
    cout << "\n\n\t\t Choose the corresponding number." << endl;
    cout << "\n\n\t\t  1. Surname" << endl;
    cout << "\n\n\t\t  2. ID Number" << endl;
    cout << "\n\n\t\t  Selected: ";
    cin >> selected;

    //PROCESS - CALLING FUNCTIONS - SWITCHING
    switch(selected) {
        case 1: 
            SearchBySurname();
            system("pause");
            system("cls");
            goto main_menu;
            break;
        case 2:
            SearchById();
            system("pause");
            system("cls");
            goto main_menu;
            break;
        default: 
            cout << "\nWrong Input! Please choose the corresponding number 1 or 2..." << endl;
            system("pause");
            system("cls");
            goto main_menu;
            break;
    }
    cout << endl;
return 0;
}

void SearchBySurname(){ //SEARCH BY SURNAME FUNCTION
    //INITIALIZATION
    string select;
    int selected;

    //INPUT
    cout << "\n\n\nFind student's grades: " << endl;
    cout << "Please enter a student's surname: ";
    cin >> select;

    system("cls");
    
    // SURNAME AND GRADES
    cout << "--------------------------------------------------------------------------------\n";
    for(int column = 0; column <= 5; ++column ) {
        if(column != 1) {
            cout << STUDENT_DATA[0][column] << "\t  ";
        }
    } cout << "\n--------------------------------------------------------------------------------\n";

    if(select == "Santos" || select == "santos" || select == "SANTOS") {
        //OUTPUT SANTOS GRADES
        for(int column = 0; column <= 5; ++column ) {
                if(column != 1) {
                    cout << STUDENT_DATA[1][column] << "\t\t";
                }
            }
    } else if(select == "Apple" || select == "apple" || select == "APPLE") {
        //OUTPUT APPLE'S GRADES
        for(int column = 0; column <= 5; ++column ) {
                if(column != 1) {
                    cout << STUDENT_DATA[2][column] << "\t\t";
                }
            }     
    } else if(select == "James" || select == "james" || select == "JAMES") {
        //OUTPUT JAMES' GRADES
        for(int column = 0; column <= 5; ++column ) {
                if(column != 1) {
                    cout << STUDENT_DATA[3][column] << "\t\t";
                }
            }
    } else if(select == "Smith" || select == "smith" || select == "SMITH") {
        //OUTPUT SMITH'S GRADES
          for(int column = 0; column <= 5; ++column ) {
                if(column != 1) {
                    cout << STUDENT_DATA[4][column] << "\t\t";
                }
            }
    } else if(select == "Cruz" || select == "cruz" || select == "CRUZ") {
        //OUTPUT CRUZ GRADES
        for(int column = 0; column <= 5; ++column ) {
                if(column != 1) {
                    cout << STUDENT_DATA[5][column] << "\t\t";
                }
            }
    } else {
        cout << "\nWrong Input! Please input student's surname..." << endl;
    }

    cout << endl;
}

void SearchById() { //SEARCH BY ID FUNCTION
    int select;

    //INPUT
    cout << "\n\n\nFind student's grades: " << endl;
    cout << "Please enter a student's ID: ";
    cin >> select;

    system("cls");


    //ID AND SURNAME
    cout << "--------------------------------------------------------------------------------\n";
    for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[0][column] << "\t";
    } cout << "\n--------------------------------------------------------------------------------\n";

    if(select == 1122) {
        //OUTPUT SANTOS GRADES
        for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[1][column] << "\t\t  ";
        }
    } else if(select == 1223 ) {
        //OUTPUT APPLE'S GRADES
        for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[2][column] << "\t\t  ";
        }
    } else if(select == 3222) {
        //OUTPUT JAMES' GRADES
        for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[3][column] << "\t\t  ";
        }  
    } else if(select == 3242) {
        //OUTPUT SMITH'S GRADES
        for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[4][column] << "\t\t  ";
        }
    } else if(select == 5321 ) {
        //OUTPUT CRUZ GRADES
        for(int column = 1; column <= 5; ++column ) {
            cout << STUDENT_DATA[5][column] << "\t\t  "; 
        }  
    } else {
        cout << "\nWrong Input! Please input student's ID number..." << endl;

    }          

    cout << endl;
}
