#include<bits/stdc++.h>
using namespace std;
int calculategcd(int n1,int n2)
{
	while(n2 != 0)
	{
		int remain= n1%n2;
		
		 n1=n2;
		 n2=remain;
	}
	return n1;
}
void printgcd(int n1,int n2)
{
	int gcd=calculategcd(n1,n2);
	
	cout<<gcd;
}
int main()
{
	int num1,num2;
	cout<<"enter two number: ";
	cin>>num1>>num2;
	
	printgcd(num1,num2);
	
	return 0;
}
