#include<iostream>
using namespace std;
int findpivot(int arr[],int size)
{
	int start=0;
	int end=size-1;
	while(start<end)
	{
		int mid=start+(end-start)/2;
		
		if(arr[0]<=arr[mid])
		start=mid+1;
		
		else
		end=mid;
    }
    return start;
}
void printpivot(int arr[],int size)
{
	int pivot=findpivot(arr,size);
	
	cout<<"index of pivot element is: "<<pivot<<endl;
}
int main()
{
	int arr[5]={3,8,10,17,1};
	
	printpivot(arr,5);
	
	return 0;
}
