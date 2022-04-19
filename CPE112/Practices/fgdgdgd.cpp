/* Wala ko kapasa ug exam gahapon so hopefully
 right now I could figure out where I went wrong or how I went wrong yesterday
 I am googling of all the requirements and I will try to make it work,
 I will meet all the requirements of the program..... I had regrets tho, but I forgave my self. Lets code!*/ 

#include<iostream>
using namespace std;
 
// A function to check if n is palindrome
int isPalindrome(int n)
{
    // Find reverse of n
    int rev = 0;
    for (int i = n; i > 0; i /= 10)
        rev = rev*10 + i%10;
 
    // If n and rev are same, then n is palindrome
    return (n==rev);
}

// Driver program to test above function
int main() {
    int lowerRange, upperRange;
    
    //input
	cout << "This program will get all the palindrome numbers between a range." << endl;
	cout << "\tLower range:";
	cin >> lowerRange;
	cout << "\tUpper range:";
	cin >> upperRange;

    if (lowerRange > 99 && upperRange > 99) {
        cout << "\nThese are the palindrome values: ";
        
        for (int i = lowerRange; i <= upperRange; i++)
        if (isPalindrome(i))
          cout << i << " ";
            for (isPalindrome(i);  )
    } else {

        cout << "\nWrong input. Kindly enter 3 digit number and your upper range should be greater that lower range." << endl; 
    
    }
    
    return 0;
}