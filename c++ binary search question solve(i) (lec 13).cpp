#include<iostream>
using namespace std;

int find1stoccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1; // keep searching on left
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int findlastoccurance(int arr[], int size, int key)
{
    int start = 0, end = size - 1, ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1; // keep searching on right
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[8] = {0, 0, 1, 1, 2, 2, 2, 2};
    int count1 = find1stoccurance(arr, 8, 2);
    int count2 = findlastoccurance(arr, 8, 2);

    cout << "1st occurrence index of " << 2 << " is: " << count1 << endl;
    cout << "Last occurrence index of " << 2 << " is: " << count2 << endl;

    return 0;
}

