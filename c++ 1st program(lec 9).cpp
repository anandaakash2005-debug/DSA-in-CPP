#include<iostream>
using namespace std;
int main()
{
	int i,j=-24;
	int arr[100000];
	
	for(i=0;i<100000;i++)
	{
		arr[i]=j;
	}
	
	for(i=0;i<100000;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	return 0;
}
