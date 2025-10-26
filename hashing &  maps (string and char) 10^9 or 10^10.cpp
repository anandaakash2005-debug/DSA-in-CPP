#include<bits/stdc++.h>
using namespace std;
int main()
{

    int num;
    cout<<"Enter size of an array ";
    cin>>num;

    cout<<"Enter element: ";
    int arr[num];
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

    int q;
    cout<<"Enter how many number you want to search: ";
    cin>>q;
    while(q--)
    {
        int n;
        cout<<"Enter number: ";
        cin>>n;
       cout<< mpp[n];
    }
    return 0;
}
