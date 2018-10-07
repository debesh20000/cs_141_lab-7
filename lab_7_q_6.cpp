#include <iostream>
using namespace std;
int rev(int n){
/*
printing the reverse of given number
*/
	if(n ==0)
		return 0;
        else{
		cout<<n%10;
		return rev(n/10);
		}
	}
int main()
{
	int n; 
	// Inputting number from user
	cout<<"enter number"<<endl;
	cin>>n;
	cout<< "The reverse of the number is ";
	//calling the function
	rev(n);
	cout<<endl;
	return 0;
}
