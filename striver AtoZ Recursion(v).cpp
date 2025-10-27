#include<bits/stdc++.h>
using namespace std;
void revarray(int i,int arr[],int size)
{
	if(i>=size/2)
	return ;
	swap(arr[i],arr[size-i-1]);
	revarray(i+1,arr,size);
}
int main()
{
	int i,num;
	int arr[50];
	cout<<"Enter numer of element: ";
	cin>>num;
	
	cout<<"Enter element: ";
	for(i=0;i<num;i++)
	{
		cin>>arr[i];
	}
	revarray(0,arr,num);
	for(i=0;i<num;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
