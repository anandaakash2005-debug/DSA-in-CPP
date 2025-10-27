#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,j;
	int k=i;
	while(i<=5)
	{
		j=1;
		while(j<=i)
		{
			cout<<k<<" ";
			k++;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
