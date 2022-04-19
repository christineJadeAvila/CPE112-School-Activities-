#include <iostream>
using namespace std;

int main() {
    //initialization
    string facultyName, remarks;
    float evaluationScore;

    //output the criteria
    menu:
    cout << "\tCriteria\n" << endl;
    cout << "4.50 - 5.00 -  Outstanding" << endl;
    cout << "4.00 - 4.49 -  Very Satisfactory" << endl;
    cout << "3.50 - 3.99 -  Satisfacory" << endl;
    cout << "3.00 - 3.49 -  Needs Improvement" << endl;
    cout << "2.99 - below - Poor" << endl;


    //input 
    cout << "\nKindly input faculty name: "; cin >> facultyName;
    cout << "Kindly input the evaluation score: "; cin >> evaluationScore;

    //process 
    if (evaluationScore >= 4.50 ) {
        remarks = "Outstanding";
    } else if (evaluationScore >= 4.00) {
        remarks = "Very Satisfactory";
    } else if (evaluationScore >= 3.50) {
        remarks = "Satisfactory";
    } else if (evaluationScore >= 3.00) {
        remarks = "Need Improvement";
    } else if (evaluationScore < 3.00) {
        remarks = "Poor";
    }

    //output
    cout << "\nFaculty Name: " << facultyName << endl;
    cout << "Evaluation Scores: " << evaluationScore << endl;
    cout << "Remarks: " << remarks << endl;
    goto menu;

return 0;

}