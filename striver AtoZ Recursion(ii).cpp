#include<bits/stdc++.h>
using namespace std;
void printnum(int n)
{
	if(n==0)
	return ;
	cout<<n<<endl;
     printnum(n-1);
}
int main()
{
	int num;
	cout<<"enter the limit: ";
	cin>>num;
	
	printnum(num);
	return 0;
}
