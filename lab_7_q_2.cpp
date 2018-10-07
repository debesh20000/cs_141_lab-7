#include <iostream>
using namespace std;
int num(int i){
/*
printing the numbers in range of 1 and n
*/
	if(i==0)
		return 0;
        else{
		cout<<i<<endl;
		return num(i-1);
		}
	}
int main()
{
	int i; 
	// Inputting last number from user
	cout<<"enter last number"<<endl;
	cin>>i;
	cout<<"the numbers between 1 and n are"<<endl;
	//calling the function
	num(i);
	cout<<endl;
	return 0;
}
