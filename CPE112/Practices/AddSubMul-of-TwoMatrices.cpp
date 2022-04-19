#include <iostream>
using namespace std;

int main() {
    int matrixA[3][3];
    int matrixB[3][3];
    int matrixSum[3][3];
    int matrixDif[3][3];
    int matrixPro[3][3]; 

    cout << "Please input values for matrix A: \n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cin >> matrixA[row][col];
            //[0][0], [0][1], [0][2], 
            //[1][0], [1][1], [1][2],
            //[2][0], [2][1], [2][2]
        }

    }

    cout << "Please input values for matrix B: \n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cin >> matrixB[row][col];
            //[0][0], [0][1], [0][2], 
            //[1][0], [1][1], [1][2],
            //[2][0], [2][1], [2][2]
        }
    }

    cout << "This is matrix A: \n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout <<"\t"<<matrixA[row][col];
        }
        cout << "\n";
    }

    cout << "This is matrix B: \n";
    for(int row = 0; row < 3; row++) {
        for (int col = 0; col < 3; col++){
            cout << "\t" << matrixB[row][col];
        }
        cout << "\n";
    }

    //Addition, subtraction, & multiplication of two matrices
    cout << "This is the result of adding matrix A and Matrix B: \n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++ ) {
            //[0][0], [0][1], [0][2], 
            //[1][0], [1][1], [1][2],
            //[2][0], [2][1], [2][2]
            matrixSum[row][col] = matrixA[row][col] + matrixB[row][col];

            cout << "\t" << matrixSum[row][col];
        }

        cout << "\n";
    }

    cout << "This is the result of subtracting matrix A and Matrix B: \n";
    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            matrixDif[row][col] = matrixA[row][col] - matrixB[row][col];

            cout << "\t" << matrixDif[row][col];
        }

        cout << "\n";
    }

    cout << "This is the result of multiplying matrix A and Matrix B; \n";
    for(int row = 0; row < 3; row++) {
        for( int col = 0; col < 3; col++) {
            int sum = 0;

            for(int ans = 0; ans < 3; ans++) {
                sum = sum + matrixA[row][ans] * matrixB[ans][col];
                matrixPro[row][col] = sum;
            }
            
            cout << "\t" << matrixPro[row][col];
        }
        cout << "\n";
    }

    return 0;
}