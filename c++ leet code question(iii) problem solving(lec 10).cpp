#include<iostream>
using namespace std;
int finddup(int arr[],int size)
{
	int i,ans=0;
	
	for(i=0;i<size;i++)
	{
		ans^=arr[i];//elements between 1 - (size-1);
	}
	
	for(i=0;i<size;i++)
	{
		ans^=i;//elements are cancelling ex-1^1=0;
	}
	
	return ans;
}
void printdup(int arr[],int size)
{
	int dup=finddup(arr,size);
	
	cout<<"duplicant element is: "<<dup<<endl;
}
int main()
{
	int arr[5]={1,2,3,4,3};
	
	printdup(arr,5);
	
	return 0;
}
