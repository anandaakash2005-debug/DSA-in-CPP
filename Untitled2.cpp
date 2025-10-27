#include<iostream>
using namespace std;
int find1stoccur(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int findlastoccur(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int ans=-1;
	
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]<key)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int main()
{
	int arr[9]={0,0,1,1,2,2,2,2,3};
	
	int count1=find1stoccur(arr,9,2);
	int count2=findlastoccur(arr,9,2);
	
	cout<<"1st occurance index of "<<2<<" is: "<<count1<<endl;
	cout<<"last occurance index of "<<2<<" is: "<<count2<<endl;
	
	return 0;
}
