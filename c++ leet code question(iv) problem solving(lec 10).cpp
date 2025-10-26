#include<iostream>
using namespace std;
int printdup(int arr[],int size)
{
	int i,j;
	cout<<"duplicant element is: ";
	for(i=1;i<=size;i++)
	{
		int count=0;
		for(j=0;j<size;j++)
		{
			if(i==arr[j])
			{
				count++;
			}
		}
		if(count==2)
		cout<<i<<" ";
	}
}
int main()
{
	int arr[]={1,2,2,3,3,4,7,8};
	
	printdup(arr,8);
	
	return 0;
}
