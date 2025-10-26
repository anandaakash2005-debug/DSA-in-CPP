#include<iostream>
using namespace std;
int find1stoccure(int arr[],int size,int key)
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
		start=mid+1;
		
		else
		end=mid-1;
	}
	return ans;
}
int findlastoccure(int arr[],int size,int key)
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
		start=mid+1;
		
		else
		end=mid-1;
	}
	return ans;
}
int main()
{
	int arr[9]={0,0,1,1,2,2,2,2,3};
	
	int count1=find1stoccure(arr,9,2);
	int count2=findlastoccure(arr,9,2);
	
	cout<<"total number of occurence is: "<<count2-count1+1<<endl;
	return 0;
}
