#include <iostream>
using namespace std;

int main(){
        menu:

        int arr[10];

        cout<<"Please input 10 elements for Array 1:\n";
        for(int i=0; i<10;i++){
                cin>>arr[i];

        if(arr[i]==arr[i-1]||arr[i]==arr[i-2]||arr[i]==arr[i-3]||arr[i]==arr[i-4]||arr[i]==arr[i-5]||arr[i]==arr[i-6]||arr[i]==arr[i-7]||arr[i]==arr[i-8]||arr[i]==arr[i-9]){

                cout<<"\n Invalid input! You enter the same value. try it again.\n";
            system("pause");
            system("cls");
            goto menu;
        }
        }
        }