#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key)
{
	int start =0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		return mid;
		
		else if(arr[mid]<key)
		start=mid+1;
		
		else //arr[mid]>key
		end=mid-1;
		
		mid=start+(end-start)/2;
	}
	return -1;
}
void printindex(int arr[],int size,int key)
{
	int index=binarysearch(arr,size,key);
	
	cout<<"index of "<<key<<" is: "<<index<<endl;
}
int main()
{
	int even[6]={2,4,6,8,10,12};
	int odd[5]={1,3,5,7,9};
	
	printindex(even,6,10);
	printindex(odd,5,9);
	
	return 0;
}
