#include<iostream>
using namespace std;
int main()
{
	int i,n;
	int arr[100];
	
	cout<<"enter the number of element in array: ";
	cin>>n;
	
	cout<<"enter elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	int max=arr[0];
	int min=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
		else if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	
	cout<<"maximum element in the array: "<<max<<endl;
	cout<<"minimum element in the array: "<<min<<endl;
	
	return 0;
}
