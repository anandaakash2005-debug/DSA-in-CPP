#include<bits/stdc++.h>
using namespace std;
int countdigit(int n)
{
	int count=0;
	while(n!=0)
	{
		count++;
		n/=10;
	}
	return count;
}
int calarm(int n)
{
	int cnt=countdigit(n);
	int remainder,ans=0;
	
	while(n!=0)
	{
		remainder=n%10;
		ans=ans+pow(remainder,cnt);
		n/=10;
	}
	return ans;
}
void checkarmstrong(int n)
{
	int armstng=calarm(n);
	
	if(n==armstng)
	cout<<n<<" is a armstrong number"<<endl;
	
	else
	cout<<n<<" is not a armstrong number"<<endl;
}
int main()
{
	int num;
	cout<<"enter a number: ";
	cin>>num;
	
	checkarmstrong(num);
	
	return 0;
}
