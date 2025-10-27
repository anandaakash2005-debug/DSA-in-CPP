#include<bits/stdc++.h>
using namespace std;
int fact=1;
int calfact(int n)
{
	if(n==0)
	return 0;
	fact*=n;
	calfact(n-1);
	return fact;
}
int main()
{   
    int num;
    cout<<"Enter number: ";
    cin>>num;
    
    cout<<"the factorial of "<<num<<" is "<<calfact(num)<<endl;
	return 0;
}
