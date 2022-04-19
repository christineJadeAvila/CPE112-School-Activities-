//

#include <iostream>
using namespace std;

int main() {
    //initialization
    double evaluationScore;
    string facultyName, remarks;
    
    //input
    cout << "ENTER FACULTY NAME: ";
    cin >> facultyName;
    cout << "\nENTER EVALUATION SCORE: ";
    cin >> evaluationScore;

    //Process
    if (evaluationScore >= 4.50) {
        remarks = "Outstanding";
    } else if (evaluationScore >= 4.00)  {
        remarks = "Very Satisfactory";
    } else if (evaluationScore >= 3.50) {
        remarks = "Satisfactory";
    } else if (evaluationScore >= 3.00) {
        remarks = "Needs Improvement";
    } else if (evaluationScore < 3.00) {
        remarks = "Poor";
    }


    //output
    cout << "Faculty Name: " 
         << facultyName; 
    cout << "\nEvaluation Score: " 
         << evaluationScore;
    cout << "\nRemarks: " 
         << remarks << endl;

return 0;

}

