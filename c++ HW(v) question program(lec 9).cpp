#include<iostream>
using namespace std;
int arrayintersect(int arr[],int arg[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i]==arg[j])
			{
				return arr[i];
			}
		}
	}
	return -1;
}
void printcommon(int arr[],int arg[],int size)
{
	int i;
	int com=arrayintersect(arr,arg,size);
	if(com!=-1)
	cout<<"common element in two array is: "<<com<<endl;
	else
	cout<<"there are no commmon element in two array"<<endl;
}
int main()
{
	int arr[5] = {7, 9, 5, 7, 3};
    int arg[5] = {8, 7, 6, 5, 4};
    
    printcommon(arr,arg,5);
}
