#include<iostream>
using namespace std;

void update(int arr[],int n)
{
	cout<<"inside the function"<<endl;
	int i;
	arr[1]=120;
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
	cout<<endl;
	cout<<"going back to the function"<<endl;
}

int main()
{
	int i;
	int arr[5]={7,9,1,5,3};
	
	update(arr,5);
	
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
