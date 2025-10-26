#include<iostream>
using namespace std;
int findunique(int arr[],int n)
{
	int i,ans=0;
	for(i=0;i<n;i++)
	{
		ans^=arr[i];
	}
	return ans;
}
void printunique(int arr[],int n)
{
	int i;
	int unique=findunique(arr,n);
	
	if(unique)
	{
		cout<<"unique element in the array is: "<<unique<<endl;
	}
}
int main()
{
	int arg[7]={3,7,2,2,7,3,4};
	
	findunique(arg,7);
	
	printunique(arg,7);
	
	return 0;
}
