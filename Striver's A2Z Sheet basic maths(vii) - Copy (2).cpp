#include<bits/stdc++.h>
using namespace std;
int checkprime(int num)
{
	int i;
	
	if(num==0)
	return 0;
	
	else if(num==1)
	return 0;
	
	for(i=2;i<num/2;i++)
	{
		if(num%i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
void printprime(int num)
{
	int prime=checkprime(num);
	
	if(prime!=0)
	{
		cout<<"TRUE"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter number: ";
	cin>>n;
	
	printprime(n);
	return 0;
}
