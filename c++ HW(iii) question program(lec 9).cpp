#include<iostream>
using namespace std;
int main()
{
	int i,n,ispresent=0;
	int arr[5]={1,2,7,9,11};
	
	int key;
	cout<<"enter the element to search: ";
	cin>>key;
	
	//check 1 is present in the array=>yes/no
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			ispresent=1;
		}
		else
		{
			ispresent=0;
		}
	}
	
	if(ispresent)
	cout<<key<<" is present in the array"<<endl;
	
	else
	cout<<key<<" is not present in the array"<<endl;
	
	return 0;
}
