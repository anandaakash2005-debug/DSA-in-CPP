#include<iostream>
using namespace std;
void tripletsum(int arr[],int n,int target)
{
	int i,j,k;
	bool found=false;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			for(k=j+1;k<n;k++)
			{
				if( arr[i]+arr[j]+arr[k]==target)
			{
				cout<<"triplet sum element in array is:["<<arr[i]<<","<<arr[j]<<","<<arr[k]<<"]"<<endl;
				found=true;
			}
			}
		}
	}
	if(!found)
	{
		cout<<"no triplet found with sum: "<<target<<"."<<endl;
	}
}
int main()
{
	int arr[9] = {7, 9,9,4, 5,2, 7, 1,3};
    int arg[10] = {8,5,6,3,7,7,5,6,4};
	
	tripletsum(arr,9,21);
	tripletsum(arg,10,18);
	
	return 0; 
}
