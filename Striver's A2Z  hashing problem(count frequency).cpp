#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter size of an array: ";
    cin>>num;

    int arr[num]={0};
    cout<<"Enter element: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    unordered_map<int,int>mpp;
    for(int i=0;i<num;i++)
    {
        mpp[arr[i]]+=1;
    }

    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    return 0;
}
