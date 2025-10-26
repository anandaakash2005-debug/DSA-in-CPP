#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num;
	cout<<"enter number";
	cin>>num;
	
	int ans=0,i=0;
	
	while(num!=0)
	{
		int digit=num%10;
		if(digit==1)
		{
			ans=ans+(digit*pow(2,i));
		}
		i++;
		num/=10;
	}
	cout<<"decimal number is "<<ans<<endl;
	return 0;
}
