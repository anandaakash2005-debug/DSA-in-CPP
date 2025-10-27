#include<bits/stdc++.h>
using namespace std;
int countdigit(int n)
{
	int count=0;
	while(n!=0)
	{
		n/=10;
		count++;
	}
	return count;
}
void numbercount(int n)
{
	int count=countdigit(n);
	
	cout<<"number of digit is: "<<count<<endl;
}
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	
	numbercount(num);
	
	return 0;
}
