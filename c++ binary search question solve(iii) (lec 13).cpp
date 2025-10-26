#include<iostream>
using namespace std;
int peakindex(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		int mid=start+(end-start)/2;
		
		if(arr[mid]<arr[mid+1])
		start=mid+1;
		
		else
		end=mid;
	}
	return start;
}
int main()
{
	int arr[4]={2,3,5,1};
	
	int peak=peakindex(arr,4);
	
	cout<<"peak index of the array: "<<peak<<endl;
	
	return 0;
}
