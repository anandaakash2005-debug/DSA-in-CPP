#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,j;
	while(i<=4)
	{
		j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		int k=3;
		while(k>=i)
		{
			cout<<" ";
			k--;
		}
		int l=3;
		while(k>=i)
		{
			cout<<" ";
			l--;
		}
		int m=i;
		while(m)
		{
			cout<<m;
			m--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
