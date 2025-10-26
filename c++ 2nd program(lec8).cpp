#include<iostream>
using namespace std;
int power(int a,int b)
{
	int i,ans=1;
	for(i=1;i<=b;i++)
	{
		ans*=a;
	}
	return ans;
}
int main()
{
	int num1,num2;
	cout<<"enter two number: ";
	cin>>num1>>num2;
	
	int ans=power(num1,num2);
	cout<<"answer is: "<<ans<<endl;
	
	return 0;
}
