#include<bits/stdc++.h>
using namespace std;
int main()
{
	char i='A';
	while(i<='E')
	{
		char j='E';
		char k='A';
		while(j>=i)
		{
			cout<<k<<" ";
			k++;
			j--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
