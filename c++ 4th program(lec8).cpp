#include<iostream>
using namespace std;
int factorial(int n)
{
	int i,fact=1;
	for(i=n;i>=1;i--)
	{
		fact*=i;
	}
	return fact;
}
int nCr(int n,int r)
{
	int num=factorial(n);
	int denom=factorial(r)*factorial(n-r);
    return num/denom; 
}

int main()
{
	int n,r;
	cout<<"enter the value of n,r(interms of nCr): ";
	cin>>n>>r;
	
	cout<<"value of nCr is: "<<nCr(n,r)<<endl;
	
	return 0;
}
