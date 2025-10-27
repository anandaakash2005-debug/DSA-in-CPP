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
void checkpalindrome(int n)
{
	int revnum=reversenum(n);
	int orinum=n;
	
	if(revnum==orinum)
	cout<<"palindrome"<<endl;
	
	else
	cout<<"not palindrome"<<endl;
}
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	
	checkpalindrome(num);
	
	return 0;
}
