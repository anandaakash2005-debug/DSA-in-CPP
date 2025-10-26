#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> findpairsum(int arr[], int size, int target)
{
    vector<vector<int>> ans;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    sort(ans.begin(), ans.end()); // Optional: to sort the result
    return ans;
}

void printpairsum(int arr[], int size, int target)
{
    vector<vector<int>> pairs = findpairsum(arr, size, target);
    
    cout << "The pairs with sum " << target << " are:\n";
    for (auto pair : pairs)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 6};
    int target = 5;

    printpairsum(arr, 5, target);

    return 0;
}

