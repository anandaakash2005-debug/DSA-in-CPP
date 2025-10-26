#include<iostream>
using namespace std;
int fibona(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	return fibona(n-1)+fibona(n-2);
}
int main()
{
	int i,num;
	cout<<"enter n'th: ";
	cin>>num;

	cout<<"n'th fibonacci number is: "<<fibona(num)<<endl;
	return 0;
}
