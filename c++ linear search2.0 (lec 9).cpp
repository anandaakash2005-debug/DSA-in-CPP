#include<iostream>
using namespace std;
void swaparray(int arr[],int size)
{
	int start=0;
	int end=size-1;
	
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int ary[5]={7,9,5,1,3};
	int arr[6]={2,4,6,8,10,12};
	
	swaparray(ary,5);
	swaparray(arr,6);
	
	printarray(ary,5);
	printarray(arr,6);
	
	return 0;
}
