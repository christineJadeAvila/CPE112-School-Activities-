#include <iostream>
using namespace std;

int main() {
    //INITIALIZATION
    int numbers[10];
    int sort;
	int temp;

	cout << "\t\tSorting Arrays\n" << endl;

    //INPUT
    cout << "Number of items to sort: ";
    cin >> sort;
    
    //STORE INPUT TO ARRAY
    cout << "Enter elements " << endl;
    for ( int i = 0; i < sort; ++i) {
		cout << "Element [" << i + 1 << "]: ";
    	cin >> numbers[i];
	}

    //OUTPUT THE ARRAY OF INPUTTED NUMBERS
	cout << "\n\nEnter Elements \n";
	for ( int n = 0; n < sort; ++n) {
		cout << "\t" <<numbers[n] << " ";
	}

	//SORT THE ELEMENTS IN ASCENDING
    cout << "\n\nLowest -> Highest \n";
    for( int i = 0; i < sort; i++ ) {		
		for(int j = i+1; j < sort; j++) { 
			if(numbers[i] > numbers[j]) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}                                                                                                                                                                                                                                                                                                           
		}
	}
	
	for(int i = 0; i < sort ; i++)
	cout<< "\t" <<numbers[i]<< " ";

	//SORT THE ELEMENTS IN DESCENDING
	cout << "\n\nHighest -> Lowest \n";
    for(int i = 0; i < sort; i++) {		
		for(int j = i + 1; j < sort; j++) {
			if(numbers[i] < numbers[j]) {
				temp = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = temp;
			}
		}
	}
	
	for(int i=0;i<sort;i++)
	cout<< "\t" <<numbers[i]<< " ";

	//GET THE HIGHEST NUMBER
	int high = numbers[0];
	for(int i = 1;i < sort; ++i) {
    if(high < numbers[i])
      high = numbers[i];
  	}

  	cout << "\n\n\t\t\t\tHighest = " << high;

	//GET THE LOWEST NUMBER
	int low = numbers[0];
	for (int i = 1; i < sort; ++i) {
		if(low > numbers[i]) {
			low = numbers[i];
		}
	}

	cout << "\tLowest = " << low << "\n" << endl;
	return 0;
}
