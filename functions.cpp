#include<bits/stdc++.h>
using namespace std;
int printsum(int a,int b)
{
	return a+b;
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	int sum=printsum(n1,n2); 
	cout<<"sum of two numbers is: "<<sum<<endl;
	return 0;
}
