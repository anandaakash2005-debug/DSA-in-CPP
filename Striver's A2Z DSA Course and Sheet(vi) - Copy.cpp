#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,j;
	while(i<=5)
	{
		j=5;
		int k=1;
		while(j>=i)
		{
			cout<<k;
			k++;
			j--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
