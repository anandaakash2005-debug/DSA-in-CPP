#include<iostream>
#include<vector>
using namespace std;
void arrintersect(int arr[],int arg[],int size1,int size2)
{
	int i=0,j=0;
	vector <int> ans;
	cout<<"intersecting elements are: ";
	
	while(i<size1 && j<size2)
	{
		if(arr[i]==arr[j])
		{
			ans.push_back(arr[i]);
			i++;
			j++;
		}
		else if(arr[i]<arr[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	cout<<"intersecting elements are: ";
		for (int x : ans)
    {
        cout << x << " ";
    }
    cout << endl;
}
int main()
{
	int arr[6]={1,2,2,2,3,4};
	int arg[4]={2,2,3,3};
	
	arrintersect(arr,arg,6,4);
	
	return 0;
}
