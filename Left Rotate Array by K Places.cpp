#include<bits/stdc++.h>
using namespace std;
void replacearr(vector<int>&arr,int k)
{
    vector<int>temp;
    int n=arr.size();

    if(n==0 || k==0 || k%n ==0)
        return ;

    if(k>n)
    {
        k=k%n;
    }

    for(int i=k;i<n;i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=0;i<k;i++)
    {
        temp.push_back(arr[i]);
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=temp[i];
    }

}
int main()
{
    vector<int>arr={3, 4, 1, 5, 3, -5};

    int ind;
    cout<<"Enter rotating index(0 based): ";
    cin>>ind;

    replacearr(arr,ind);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
    return 0;
}
