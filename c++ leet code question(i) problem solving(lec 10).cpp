#include<iostream>
using namespace std;
int findunique(int arr[],int size)
{
	int i,ans=0;
	
	for(i=0;i<size;i++)
	{
		ans^=arr[i];
	}
	
	return ans;
}
void printunique(int arr[],int size)
{
	int unique=findunique(arr,size);
	
	cout<<"unique element is: "<<unique<<endl;
}
int main()
{
	int arr[5]={1,2,2,1,3};
	
	printunique(arr,5);
	
	return 0;
}
