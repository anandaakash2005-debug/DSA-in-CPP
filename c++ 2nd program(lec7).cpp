#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter number: ";
	cin>>n;
	
	int m=n;
	int mask=0;
	
	while(m!=0)
	{
		mask=(mask<<1) | 1;
		m>>1;
	}
	
	int ans=(~n) & mask;
	cout<<"1's compliment: "<<ans<<endl;
	return 0;
}
