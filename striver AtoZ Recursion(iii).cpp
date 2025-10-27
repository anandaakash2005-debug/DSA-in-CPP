#include<bits/stdc++.h>
using namespace std;
int sum=0;
int calsum(int i,int n)
{
	if(i>n)
	return 0;
	sum+=i;
	calsum(i+1,n);
	return sum;
}
int main()
{
	int num;
	cout<<"Enter num: ";
	cin>>num;
	
	cout<<"the sum of first "<<num<<" natural numbers: "<<calsum(1,num)<<endl;
	return 0;
}
