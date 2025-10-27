#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,j;
	while(i<=5)
	{
		j=4;
		while(j>=i)
		{
			cout<<" ";
			j--;
		}
		int a=i;
		while(a)
		{
			cout<<"*";
			a--;
		}
		int b=i-1;
		while(b)
		{
			cout<<"*";
			b--;
		}
		cout<<endl;
		i++;
	}
	i=1;
	while(i<=4)
	{
		j=1;
		while(j<=i)
		{
			cout<<" ";
			j++;
		}
		int k=4;
		while(k>=i)
		{
			cout<<"*";
			k--;
		}
		int l=3;
		while(l>=i)
		{
			cout<<"*";
			l--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
