#include <iostream>
using namespace std;
int sum(int n){
/*
printing sum of all natural numbers between 1 and n
*/
	if(n ==0)
		return 0;
        else
		return n+sum(n-1);
	}
int main()
{
	int n,a; 
	// Inputting last number from user
	cout<<"enter last number"<<endl;
	cin>>n;
	//calling the function
	a = sum(n);
	cout<<"the sum of natural numbers from 1 to n is "<<a<<endl;
	return 0;
}
