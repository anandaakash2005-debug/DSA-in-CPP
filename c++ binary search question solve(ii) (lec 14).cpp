#include<iostream>
using namespace std;
long long int calsqrt(int num)
{
	int start=0;
	int end=num;
	long long int ans=-1;
	while(start<=end)
	{
	    long long int mid=start+(end-start)/2;
		
		long long int square=mid*mid;
		
		if(square==num)
		{
			return mid;
		}
		
		else if(square<num)
		{
			ans=mid;
			start=mid+1;
		}
		
		else
		{
			end=mid-1;
		}
	}
	return ans;
}
double moreprecision(int n,int precision,int tempsol)
{
	double factor=1;
	double ans=tempsol;
	double j;
	int i;
	for(i=0;i<precision;i++)
	{
		factor/=10;
		
		for(j=ans;j*j<n;j=j+factor)
		{
			ans=j;
		}
	}
	return ans;
}
int main()
{
	int n=1000000;
	
	int tempsol=calsqrt(n);
	
	cout<<"square root of "<<n<<" is: "<<moreprecision(n,3,tempsol)<<endl;
	
	return 0;
}
