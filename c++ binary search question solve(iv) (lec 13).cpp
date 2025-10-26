#include<iostream>
using namespace std;
int findpivotindex(int arr[],int size)
{
	int totalsum=0;
	int i;
	for(i=0;i<size;i++)
	{
		totalsum+=arr[i];
	}
	
	int leftsum=0;
	for(i=0;i<size;i++)
	{
		int rightsum=totalsum-leftsum-arr[i];
		if(leftsum==rightsum)
		{
			return i;
		}
		leftsum+=arr[i];
	}
	return -1;
}
void printpivotindex(int arr[], int size) {
    int index = findpivotindex(arr, size);
    cout << "Pivot index of the array is: " << index << endl;
}

int main() {
    int num1[6] = {1, 7, 3, 6, 5, 6};
    int num2[3] = {1, 2, 3};
    int num3[3] = {2, 1, -1};

    printpivotindex(num1, 6);  // Output: 3
    printpivotindex(num2, 3);  // Output: -1
    printpivotindex(num3, 3);  // Output: 0

    return 0;
}
