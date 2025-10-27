#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter size of an array: ";
    cin>>num;

    int arr[num];
    cout<<"Enter element: ";
    for(int i=0;i<num;i++)
    {
        cin>>arr[i];
    }

    map<int,int>mpp;
    for(int i=0;i<num;i++)
    {
        mpp[arr[i]]+=1;
    }

    for(auto it:mpp)
    {
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int max=mpp[0];
    int count=0;
    for(int i=1;i<19;i++)
    {
        if(max < mpp[i])
            {
                count=i;
            }
    }

    cout<<"High frequency element element is:"<<count<<endl;

    return 0;
}
