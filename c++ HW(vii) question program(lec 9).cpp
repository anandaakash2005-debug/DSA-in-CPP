#include<iostream>
using namespace std;
void swaparray(int arr[],int size)
{
	int fst=0;
	int snd=1;
	while(snd<size)
	{
		int temp=arr[snd];
		arr[snd]=arr[fst];
		arr[fst]=temp;
		
		fst+=2;
		snd+=2;
	}
}
void printswap(int arr[],int size)
{
	int i;
	cout<<"swap alternatively is: ";
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[5]={1,7,5,3,9};
	int arg[6]={8,4,6,2,12,10};
	
	swaparray(arr,5);
	swaparray(arg,6);
	
	printswap(arr,5);
	printswap(arg,6);
	
	return 0;
}
