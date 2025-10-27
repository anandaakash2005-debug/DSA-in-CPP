#include<bits/stdc++.h>
using namespace std;
int main()
{
	char i='A';
	while(i<='E')
	{
		char j='A';
		while(j<=i)
		{
			cout<<j<<" ";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
