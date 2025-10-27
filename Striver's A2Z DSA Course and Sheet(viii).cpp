#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,j;
	while(i<=5)
	{
		j=i-1;
		while(j)
		{
			cout<<" ";
			j--;
		}
		int k=5;
		while(k>=i)
		{
			cout<<"*";
			k--;
		}
		int l=4;
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
