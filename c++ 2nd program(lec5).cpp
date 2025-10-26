#include<iostream>
using namespace std;
int main()
{
	/*int num,pro=1,sum=0,dig;
cout<<"enter a number:";
cin>>num;
int x=num;
while(num!=0)
{
	int dig=num%10;
	sum+=dig;
	num/=10;
}
dig=0;
while(x!=0)
{
	int dig=x%10;
	pro*=dig;
	x/=10;
}
int sub=pro-sum;
cout<<sub<<" is the substruction of product and sum of digits of an integer"<<endl;*/

int num,count=0;
cout<<"enter unsigned integer:";
cin>>num;
while(num!=0)
{
	if(num%10!=0)
	{
		count++;
	}
	num/=10;
}
cout<<count<<endl;


return 0;
}
