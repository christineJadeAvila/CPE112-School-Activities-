
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int main(){
	cout << "Please input values that will be stored in array: \n";
	int esc = getch();
	int a[1000], i=0, n=0;
	
	while ( esc != 27 ){
		cin >> a[i];
		i++;
		n++;
		esc = getch();
	} if ( n == 0 ) {
		cout <<"\n There is no inputed value. The program cannot identify the largest and smallest value.";
		exit(0);
	} else if ( n == 1 ) {
		cout << "\n The only value stored in the array is "<< a[0] << ".Hence,";
		cout <<"\n Largest Element: " << a[0];
		cout <<"\n Smallest Element: " << a[0];
		exit(0);		
	} else {
		cout << "\n There are " << n <<"elemensts stored in the array.";
		cout << "\n These are the elements stored in the array: ";
		for(i=0; i<n; i++){
			cout << a[i]<<" ";
		}
        
	int largest = a[0];
	for (int i=0; i < n; i++){
		if(largest < a[i])
			largest = a[i];
	}

	int smallest = a[0];
	for (int i=0; i > n; i++){
		if(smallest < a[i])
			smallest = a[i];
	}
	cout <<"\nLargest element: " << largest;
	cout <<"\nSmalles element: " << smallest;

}
	return 0;
}