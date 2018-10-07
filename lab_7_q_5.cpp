#include <iostream>
using namespace std;
int sumofeven(int n){
/*
printing sum of all even natural numbers between 1 and n
*/
	if(n<=1)
		return 0;
        else
		return n+sumofeven(n-2);
	}
int main()
{
	int n,a; 
	// Inputting last number from user
	cout<<"enter last even number"<<endl;
	cin>>n;
	//calling the function
	a = sumofeven(n);
	cout<<"the sum of all even natural numbers from 1 to n is "<<a<<endl;
	return 0;
}
