#include<iostream>
using namespace std;
int findunique(int arr[],int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		bool isunique=true;
		for(j=0;j<size;j++)
		{
			if(i != j && arr[i]==arr[j])
			{
				isunique=false;
				break;
			}
		}
		if(isunique)
		return arr[i];
	}
	return -1;
}
void printunique(int arr[],int size)
{
	int i;
	int unique=findunique(arr,size);
	if(unique!=-1)
	cout<<"unique element in the array is: "<<unique<<endl;
	else
	cout<<"no unique element is exists: "<<endl;
}
int main()
{
	int arr[5] = {7, 9, 5, 7, 3};
    int ary[6] = {8, 4, 6, 2, 4, 6};
	
	printunique(arr,5);
	printunique(ary,6);
	
	return 0;
}
