#include <iostream>
using namespace std;

int main(){
    int multable[10][11];

    //nested loop
    for(int row = 1; row <= 10; row++) {
        for (int col = 1; col <= 10; col++) {
            multable[row][col] = row * col;
            cout << multable[row][col] << '\t';
        }
        cout << "\n";
    }

}