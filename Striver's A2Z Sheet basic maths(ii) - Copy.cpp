#include<bits/stdc++.h>
using namespace std;
int reversenum(int n)
{
	int remain,revnum=0;
	while(n!=0)
	{
		remain=n%10;
		revnum=(revnum*10)+remain;
		n/=10;
	}
	return revnum;
}
void printrevnum(int n)
{
	int revnum=reversenum(n);
	
	cout<<revnum;
}
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	
	printrevnum(num);
	
	return 0;
}
