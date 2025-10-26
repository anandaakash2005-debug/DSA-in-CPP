#include<bits/stdc++.h>
using namespace std;
int linear_search(vector<int>&arr,int n,int key)
{
   int found=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
           found=i;
        }
    }
    return found;
}
int main()
{
    vector<int>arr={0, 1, 4, 0, 5, 2};

    int key;
    cout<<"Enter searching element: ";
    cin>>key;

    int find=linear_search(arr,arr.size(),key);

    if(find!=0)
        cout<<"1"<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
