#include<iostream>
using namespace std;
int main()
{
	int i,n,sum=0;;
	int arr[100];
	
	cout<<"enter number of elements in the array: ";
	cin>>n;
	
	cout<<"enter elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	
	cout<<"sum of all elements in the array is: "<<sum<<endl;
	return 0;
}
