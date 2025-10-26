#include<iostream>
using namespace std;
int main()
{
	int num,ans=0,remainder;
	cout<<"enter number: ";
	cin>>num;
	
	while(num!=0)
	{
		remainder=num%10;
		if((ans>INT_MAX/10) || (ans<INT_MIN/10))
		{
			return 0;
		}
		ans=ans*10+remainder;
		num/=10;
	}
	
	cout<<"reverse integer is: "<<ans<<endl;
	return 0;
}
