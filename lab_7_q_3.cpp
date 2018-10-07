#include <iostream>
using namespace std;
int numeven(int i){
/*
printing the even numbers in range of 1 and n
*/
	if(i==0)
		return 0;
        else{
		cout<<i<<endl;
		return numeven(i-2);
		}
	}
int main()
{
	int i; 
	// Inputting last even number from user
	cout<<"enter last even number"<<endl;
	cin>>i;
	cout<<"the even numbers between 1 and n are"<<endl;
	//calling the function
	numeven(i);
	cout<<endl;
	return 0;
}
