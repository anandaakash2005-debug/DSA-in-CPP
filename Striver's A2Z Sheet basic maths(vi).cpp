#include<bits/stdc++.h>
using namespace std;
void printdivors(int n)
{
	int i;
	cout<<"The divisors of "<<n<<" is: ";
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			cout<<i<<" ";
		}
	}
}
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	
	printdivors(num);
	
	return 0;
}
