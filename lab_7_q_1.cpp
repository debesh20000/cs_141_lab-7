#include <iostream>
using namespace std;
int getpower(int a,int b){
/*
Calculating power of any number.
*/
        if(b==0)
		return 1;
        else 
		return a*getpower(a,b-1);
	}
int main()
{
	int a,b,c; 
	// Inputting base and exponent from user
	cout<<"Enter base: "<<endl;
	cin>>a;
	cout<<"Enter exponent: "<<endl;
	cin>>b;
	// Calling getpower function
	c = getpower(a,b);
	cout<<a<< "^"<<b<<" = "<<c<<endl;
	return 0;
}
