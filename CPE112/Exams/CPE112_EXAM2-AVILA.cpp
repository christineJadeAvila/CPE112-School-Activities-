#include <iostream>
using namespace std;


int main(){
	//initialization
	int lowerRange,
		upperRange;
	int palindrome;
	float d, reverse;
	
	//input
	cout << "This program will get all the palindrome numbers between a range." << endl;
	cout << "\t\tLower range:";
	cin >> lowerRange;
	cout << "\t\tUpper range:";
	cin >> upperRange;
	
	palindrome = lowerRange && upperRange;
		
	if (palindrome >= 0) {
		
		for(int a=palindrome; a!=0;) {
			d=a%10;
			reverse = (reverse*10)+d;
			a=a/10;
		} if (palindrome == reverse) {
			cout << "palindrome";
		} else {
			cout << "not palindrome";
		}

	}
	 

	
	return 0;
	

}
