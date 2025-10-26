// 1st question 
#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	int i,j,n,target;
	
	cout<<"enter target number: ";
	cin>>target;
	
	cout<<"enter number of element: ";
	cin>>n;
	
	cout<<"enter elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]+arr[j]==target)
			{
				cout<<"the two numbers such that they add up to target is: "<<i<<"and"<<j<<endl;
				break;
			}
		}
	}
	
	return 0;
}
