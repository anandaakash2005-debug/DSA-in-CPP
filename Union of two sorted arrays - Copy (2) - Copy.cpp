#include<bits/stdc++.h>
using namespace std;
int union_arr(vector<int>&arr1,vector<int>&arr2,int n1,int n2)
{
   vector<int>temp;
   vector<int>arr;
   int n;
   if(n1>n2)
    n=n1;
   else
    n=n2;
   for(int i=0;i<n;i++)
   {
       if(arr1[i]<=arr2[i])
        temp.push_back(arr1[i]);
       else
       temp.push_back(arr2[i]);

   }

   for(int i=0;i<n;i++)
   {
       arr[i]=temp[i];
   }
   return n;
}
int main()
{
    vector<int>arr1={1, 2, 3, 4, 5};
    vector<int>arr2={1, 2, 7};


    vector<int>arr=union_arr(arr1,arr2,arr1.size(),arr2.size());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
