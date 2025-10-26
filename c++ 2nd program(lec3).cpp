#include<iostream>
using namespace std;
int main()
{
	/*int i=1,n;
	cout<<"enter range:";
	cin>>n;
	
	while(i<=n)
	{
		cout<<i<<endl;
		i+=1;
	}*/
	/*int i=1,n,sum=0;
	cout<<"enter range:";
	cin>>n;
	
	while(i<=n)
	{
		sum+=i;
		i+=1;
	}
	cout<<"the sum of 1 to n numbers:"<<sum<<endl;*/
	
	/*int i=1,n,sum=0;
	cout<<"enter range:";
	cin>>n;
	
	while(i<=n)
	{
		if(i%2==0)
		{
			sum+=i;
		}
		i+=1;
	}
	cout<<"the sum of 1 to n even numbers:"<<sum<<endl;*/
	
	int far,cel;
	cout<<"enter the temparature interms of Farenhite";
	cin>>far;
	
	cel=((far-32)*5)/9;
	cout<<"the temparature interms of celcious: "<<cel<<endl;
}
