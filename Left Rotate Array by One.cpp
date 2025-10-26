#include<bits/stdc++.h>
using namespace std;
int rotatearr(vector<int>&arr,int n)
{
    if(n==0)
        return 0;
    int start=arr[0];
    for(int i=1;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=start;
    return n;
}
int main()
{
    vector<int>arr={1, 2, 3, 4, 5};
    int newarr=rotatearr(arr,arr.size());
    for(int i=0;i<newarr;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
