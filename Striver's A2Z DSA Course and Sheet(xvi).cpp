#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=1,j;
	char ch='E';
	while(i<=5)
	{
		j=1;
		char x=ch;
		while(j<=i)
		{
			cout<<x;
			x++;
			j++;
		}
		cout<<endl;
		ch--;
		i++;
	}
	return 0;
}
