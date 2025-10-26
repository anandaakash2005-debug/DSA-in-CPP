#include<iostream>
#include<math.h>
using namespace std;
int countbit(int n)
{
	int i=0,count=0,ans=0;
	while(n!=0)
	{
		int bit=n%2;
		ans=(bit*pow(10,i))+ans;
		i++;
		n/=2;
	}
	
	while(ans!=0)
	{
		if(ans%10)
		{
			count++;
		}
		ans/=10;
	}
	return count;
}
int main()
{
	int a,b;
	cout<<"enter two number: ";
	cin>>a>>b;
	
	cout<<"total number of bit is: "<<countbit(a)+countbit(b)<<endl;
	return 0;
}
