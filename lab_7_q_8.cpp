#include <iostream>
using namespace std;
int sumofdigits(int n){
/*
printing the sum of digits of given number
*/
	if(n ==0)
		return 0;
        else{
		return (n%10)+sumofdigits(n/10);
		}
	}
int main()
{
	int n,a; 
	// Inputting number from user
	cout<<"enter the  number"<<endl;
	cin>>n;
	//calling the function
	a=sumofdigits(n);
	cout<<"the sum of digits of given number is "<<a<<endl;
	return 0;
}
