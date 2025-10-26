#include<iostream>
using namespace std;

void printarray(int arr[],int size)
{
	int i;
	cout<<" printing the array "<<endl;
	for(i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int first[15]={2,7};
	printarray(first,15);
	int firstsize=sizeof(first)/sizeof(int);
	cout<<"size of first array is: "<<firstsize<<endl;
	
	int second[10]={0};
	printarray(second,10);
	int secondsize=sizeof(second)/sizeof(int);
	cout<<"size of second array is: "<<secondsize<<endl;
	
	int third[20]={1,5,9};
	printarray(third,20);
	int thirdsize=sizeof(third)/sizeof(int);
	cout<<"size of first array is: "<<thirdsize<<endl;
	
	return 0;
}
