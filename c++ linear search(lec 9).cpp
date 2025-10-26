#include<iostream>
using namespace std;
bool search(int arr[],int size,int key)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(arr[i]==key)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[10]={7,8,9,4,5,6,1,2,3,0};
	
	int key;
	cout<<" enter the element to search for: ";
	cin>>key;
	
	bool found=search(arr,10,key);
	
	if(found)
	{
		cout<<key<<" is present"<<endl;
	}
	else
	{
		cout<<key<<" is not present"<<endl;
	}
	
	return 0;
}
