#include<iostream>
using namespace std;
int main()
{
	//int a=10;
	//int b=1;
	
	/*cout<<"a&b"<<(a&b)<<endl;
	cout<<"a|b"<<(a|b)<<endl;
	cout<<"~a"<<~a<<endl;
	cout<<"a^b"<<(a^b)<<endl;
	
	cout<<(a<<3)<<endl;
	cout<<(b>>2)<<endl;
	
	int i=7;
	cout<<i++<<endl;
	//7
	cout<<++i<<endl;
	//9
	cout<<--i<<endl;
	//8
	cout<<i--<<endl;
	//8*/
	
	/*if(++a)
	cout<<b;
	else
	cout<<++b;*/
	/*int c;
	for( a,b,c=5 ;a>=1&&b<=10&&c<=9*2;a--,b++,c++)
	{
		cout<<a<<" "<<b<<" "<<c<<endl;
	}*/
	
	//int i,n,sum=0;
	//cout<<"enter n:";
	//cin>>n;
	
	/*
		for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<sum;
	*/
	//fibonacci series
	/*int i,n,a=0,b=1;
	cout<<"enter n:";
	cin>>n;
	cout<<a<<" "<<b<<" ";
	for(i=1;i<=n;i++)
	{
		int nxtnum=a+b;
		cout<<nxtnum<<" ";
		a=b;
		b=nxtnum;
		
	}*/
	
	/*int i,num,isprime=1;
	cout<<"enter number:";
	cin>>num;
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime)
	{
		cout<<num<<" is a prime number"<<endl;
	}
	else
	{
		cout<<num<<" is a not prime number"<<endl;
	}*/
	int i;
	for(i=0;i<15;i+=2)
	{
		cout<<i<<" ";
		if(i&1)
		{
			continue;
		}
		i++;
	}
	return 0;
}
