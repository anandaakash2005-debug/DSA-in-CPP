#include<iostream>
using namespace std;
bool iseven(int n)
{
	if(n&1)
	return 0; 
	
	return 1;
}
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	
	if(iseven(num))
	cout<<"number is even"<<endl;
	
	else
	cout<<"number is odd"<<endl;
	
	return 0;
}
