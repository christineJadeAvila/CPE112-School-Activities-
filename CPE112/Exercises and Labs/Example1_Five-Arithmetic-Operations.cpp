// make a program that will ask the user to input 2 values. then these 2 values will be operated by the 5 arithmetic operations

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	//initialization
	int x, y;
	int sum;
	int diff; 
	int product;
	int quotient;
	int modulus;
	
//input
cout <<"Please input two values"<<endl;
cin>>x>>y;
float a=x, b=y;

// process
sum = x + y;
diff = x - y;
product = x * y;
quotient = x / y;
modulus = x % y;
	
// output
cout<<"Sum = "<<sum<<endl;
cout<<"Difference = "<<diff;
cout<<"\nProduct = "<<product;
cout<<"\nQuotient = "<<quotient;
cout<<"\nModulus = "<<modulus<<endl;

cout<<"exponent = "<<pow(x, 3);
cout<<"\nsquare root = "<<sqrt(x)<<endl;
	
return 0;
}