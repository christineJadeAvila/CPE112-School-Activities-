#include<iostream>
#include "headerfile.h"
using namespace std;

int main(){
	int pal,din,r;
	int n;	
	int num[100][100];

    cout<<"Enter the Number: ";    
    cin>>n;   

    cout<<"--------------------------"<<endl;
    cout << "Multiplication table" <<endl;
    cout<<"--------------------------"<<endl;

	for (int i=0;i<=10;i++)
	{
		for (int y=0;y<=10;y++){
			num[i][y]=i*y;
			cout<<y<< " * "<<i<<" = "<<num[i][y]<<"\t\n";
			
		}
		cout<<"--------------------------"<<endl;
	}
    
	cout<<endl;
	
	CountingArmstrong(pal,din,r);
	

	return 0;
}