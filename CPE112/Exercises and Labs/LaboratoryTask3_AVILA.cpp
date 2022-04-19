#include<iostream>
using namespace std;

int main()
{
	int matrixA[3][3], matrixB[3][3], matrixC[3][3];
	
	cout << "Please enter a values for Matrix A :\n";
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cin >> matrixA[row][col];
		}
	}
	
	cout << "Please enter a values for Matrix B :\n";
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cin >> matrixB[row][col];
		}
	}
	
	cout << "These are the values for Matrix A :\n";
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cout << "\t" << matrixA[row][col];
		}
		cout << "\n";
	}
	
	cout << "These are the values for Matrix B :\n";
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cout << "\t" << matrixB[row][col];
		}
		cout << "\n";
	}
	
	
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			int sum = 0;
			
			for(int ans = 0; ans < 3; ans++)
			{
				sum = sum + matrixA[row][ans] * matrixB[ans][col];
			}
			matrixC[row][col] = sum;
		}
	}
	
	cout << "This is the product of 2 matrices :\n";
	for(int row = 0; row < 3; row++)
	{
		for(int col = 0; col < 3; col++)
		{
			cout << "\t" << matrixC[row][col];
		}
		cout << "\n";
	}

return 0;

}
