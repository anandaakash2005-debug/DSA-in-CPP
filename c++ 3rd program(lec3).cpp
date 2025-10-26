#include<iostream>
using namespace std;
int main()
{
	/*int i,num,isprime=1;
	cout<<"enter a number:";
	cin>>num;
	
	if(num==0 || num==1)
	cout<<"this number is not prime: "<<num<<endl;
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			isprime=0;
		    break;
		}
	}
	
	if(isprime)
	cout<<"this is a prime number: "<<num<<endl;
	else
	cout<<"this is not a prime number: "<<num<<endl;*/
	
	int i,j,n,isprime;
	cout<<"enter range:";
	cin>>n;
	
	for(i=3;i<n;i++)
	{
		isprime=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				isprime=0;
				break;
			}
		}
		if(isprime)
		cout<<i<<endl;
	}
}
