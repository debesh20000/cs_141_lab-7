#include <iostream>
using namespace std;
int gcd(int a,int b){
/*
Calculating gcd of two numbers
*/
        if(b == 0)
		return a;
        else 
		return gcd(b, a%b);
	}
int main()
{
	int a,b,c; 
	// Inputting the two numbers from user
	cout<<"Enter the two numbers to find hcf"<<endl;
	cin>>a>>b;
	// Calling the gcd function
	c = gcd(a,b);
	cout<<"The hcf of "<<a<<" and "<<b<<" is "<<c<<endl;
	return 0;
}
