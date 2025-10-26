#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter number:";
	cin>>n;
	int ans=0;
	int i=0;
	//1st process
	/*while(n!=0)
	{
		int bit=n&1;
		ans=(bit * pow(10,i))+ans;
		n=n>>1;
		i++;
	}*/
	while(n!=0)
	{
		int bit=n%2;
		ans=(bit*pow(10,i))+ans;
		n/=2;
		i++;
	}
	cout<<"ans is: "<<ans<<endl;
	return 0;
}
