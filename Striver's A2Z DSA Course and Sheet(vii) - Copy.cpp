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
		int k=1;
		while(k<=i)
		{
			cout<<"*";
			k++;
		}
		int l=i-1;
		while(l)
		{
			cout<<"*";
			l--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
