#include<iostream>
#include<cmath>
using namespace std;	

	int mul[11][3];
	int multiplier[100];
	int x=0,check,count=0;
	int arm[100];

void process(int n){

	cout<<"_____________________________\n\n";
	cout<<"MULTIPLICATION TABLE\n";
	for(int z=0;z<=n;z++) {
	cout<<"_____________________________\n\n";
	for(int i=0;i<10;i++){

		mul[i][0]=i+1;
		mul[i][1]=z;
		mul[i][2]=mul[i][0]*mul[i][1];
	
		//check if armstrong number
		int  num, rem, sum = 0,numd=0;
		check=mul[i][2];
  		num = check;
		for(int i=num;i!=0;){
			
			numd++;
			i=i/10;
		}
  		while(num != 0) {
    		rem = num % 10;
     		sum += pow(rem,numd);
			num /= 10;
		}
  		if(sum == check && sum!=0) {
    		arm[count]=check;
			count++;
        }
	cout<<mul[i][0]<< " X " << mul[i][1] << " = "<<mul[i][2]<<"\n"; 
    }				    

    }
    cout<<"\n\n*****THERE ARE "<<count << " ARMSTRONG NUMBERS BY THE GIVEN PRODUCTS WITHIN THIS RANGE OF MULTIPLIER*****" ;
    cout<<"\n\t\t\tNAMELY: ";
    for(int a=0;a<count;a++){
 	cout<<arm[a]<< " ";
    }
}