#include <iostream>
using namespace std;

int main(){

        again:
        int multiplier;
        int table[10][3];

        cout << "Please input an integer value as the multiplier: ";
        cin >> multiplier;

        for(int i = 0; i < 10; i++) {

                table[i][0]= i; //multiplicand
                table[i][1]= multiplier; //multiplier
                table[i][2]= table[i][0] * table[i][1]; //product

        }

        for(int j = 0; j < 10; j++){

                cout<< table[j][0] << " * " << table[j][1] <<" = "<< table[j][2] << endl;

        }

        goto again;

return 0;

}
