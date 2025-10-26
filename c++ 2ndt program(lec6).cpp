//negative number convert into binary
#include<iostream>
#include<vector>//for dynamic arrays
#include<cmath>//for abs
using namespace std;
int main()
{
	int num;
	cout<<"enter negative number: ";
	cin>>num;
	//only works if the number is -ve
	if(num>0)
	{
		cout<<"enter negative number: ";
		return 0;
	}
	
	vector<int>bit(8,0);//creates 8 bit binary(intialize to 0)
	int n=abs(num);//for taking absolute value
	//create binary
	int i=7;
	while(n>0 && i>=0)
	{
		bit[i]=n%2;
		i--;
		n/=2;
	}
	//1's compliment
	for(i=0;i<8;i++)
	{
		bit[i]=bit[i]^1;
	}
	//add 1:to create 2's compliment
	for(i=7;i>=0;i--)
	{
		if(bit[i]==0)
		{
			bit[i]=1;
			break;
		}
		else
		{
			bit[i]=0;
		}
	}
	//output
	cout<<"binary of "<<num<<" in 2's compliment(8 bit) is: ";
	for(i=0;i<8;i++)
	{
		cout<<bit[i];
	}
	cout<<endl;
	return 0;
}
