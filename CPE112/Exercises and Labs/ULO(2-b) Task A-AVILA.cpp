//
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //initialization
    int first, second, third, finals;
    int ex1, ex2, ex3, ex4;
    int qz1, qz2, qz3;
    float labproject;
    float grade;
    string remarks;


    //Input
    menu:
    cout << "\t\tComputation of Grades";
    cout << "\n\nPlease input scores for examinations, quizzes, laboratory exercises, laboratory projects" << endl;
    
    cout << "\nMajor Examinations (100 pts each)" <<endl;
    cout << "First: "; cin >> first;
    cout << "Second: "; cin >> second;
    cout << "Third: "; cin >> third;
    cout << "Final: "; cin >> finals; 

    cout << "\nLaboratory Exercise (50 pts each)" <<endl;
    cout << "Exer # 1: "; cin >> ex1;
    cout << "Exer # 2: "; cin >> ex2;
    cout << "Exer # 3: "; cin >> ex3;
    cout << "Exer # 4: "; cin >> ex4;

    cout << "\nLaboratory Project (100 pts): "; cin >> labproject;

    cout << "\nQuizzes (40 pts each)" <<endl;
    cout << "Qz # 1: "; cin >> qz1;
    cout << "Qz # 2: "; cin >> qz2;
    cout << "Qz # 3: "; cin >> qz3;

    //process
    
    float majorExam1 = (first / 100) * 85 + 15,
    majorExam2 = (second / 100) * 85 + 15,
    majorExam3 = (third / 100) * 85 + 15,
    majorExam4 = (finals / 100) * 85 + 15;
   
    float labExercises1 = (ex1 / 50) * 85 + 15,
    labExercises2 = (ex2 / 50) * 85 + 15,
    labExercises3 = (ex3 / 50) * 85 + 15,
    labExercises4 = (ex4 / 50) * 85 + 15;

    float labProj = (labproject / 100) * 85 + 15;

    float quizzes1 = (qz1 / 40 ) * 85 + 15,
    quizzes2 = (qz2 / 40 ) * 85 + 15,
    quizzes3 = (qz3 / 40 ) * 85 + 15;

    float totalExam =( majorExam1+majorExam2+majorExam3+majorExam4) / 4;
    float totalLabExercises = (labExercises1+labExercises2+labExercises3+labExercises4) / 4;
    float totalQuizzes = (quizzes1+quizzes2+quizzes3) / 3;

    float genAverage = round((totalExam+totalLabExercises+labProj+totalQuizzes) / 4);

    if (genAverage == 100 && genAverage > 95 ) {
        remarks = "Excellent";
    } else if (genAverage <= 94 && genAverage >= 90)  {
        remarks = "Very Good";
    } else if (genAverage < 89 && genAverage >= 85) {
        remarks = "Good";
    } else if (genAverage <= 84 && genAverage >= 80) {
        remarks = "Satisfactory";
    } else if (genAverage <= 79 && genAverage >= 75) {
        remarks = "Fair";
    } else {
        remarks = "Failed";
    }
   
   //output
    cout << "\t\t\tGen. Av.  : " << genAverage << endl;
    cout << "\t\t\tRemarks   : " << remarks <<endl;

    system("pause");
    system("cls");
    goto menu;

    
return 0;





}