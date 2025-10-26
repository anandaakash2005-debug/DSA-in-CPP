#include<iostream>
using namespace std;
bool isprime(int num)
{
	int i;
	if(num==1 || num==0)
	return 0;
	else
	{
		for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		return 0;
	}
	}
	return 1;
}

int main()
{
	int n;
	cout<<"enter number: ";
	cin>>n;
	
	if(isprime(n))
	cout<<n<<" is a prime number"<<endl;
	else
	cout<<n<<" is not a prime number"<<endl;
	
	return 0;
}
