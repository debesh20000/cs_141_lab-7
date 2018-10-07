#include <iostream>
using namespace std;
int factorial(int n){
/*
Calculating factorial of any number.
*/
        if(n==0)
		return 1;
        else 
		return n*factorial(n-1);
	}
int main()
{
	int n,c; 
	// Inputting number from user
	cout<<"Enter number "<<endl;
	cin>>n;
	// Calling factorial function
	c = factorial(n);
	cout<<"the factorial of number n is "<<c<<endl;
	return 0;
}
