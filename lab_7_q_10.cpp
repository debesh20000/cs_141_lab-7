#include <iostream>
using namespace std;
int fibo(int n){
/*
Calculating nth term of fibonacci series.
*/
        if(n==0 || n==1)
		return (n);
        else 
		return fibo(n-1)+fibo(n-2);
	}
int main()
{
	int n,b; 
	// Inputting the nth term from user
	cout<<"Enter the number of the desired term of fibonacci series"<<endl;
	cin>>n;
	// Calling fibo function
	b = fibo(n);
	cout<<" the desired term of fibonacci series is "<<b<<endl;
	return 0;
}
