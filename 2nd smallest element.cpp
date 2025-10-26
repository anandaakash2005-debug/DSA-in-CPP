#include<bits/stdc++.h>
using namespace std;
int find2ndsmallst(int arr[],int n)
{
    int small=0;
    int _2ndsmall=0;
    if(arr[0] < arr[1])
    {
         small=arr[0];
         _2ndsmall=arr[1];
    }
    else
    {
         small=arr[1];
         _2ndsmall=arr[0];
    }
    for(int i=2;i<n;i++)
    {
      if(small > arr[i])
      {
          _2ndsmall=small;
          small=arr[i];
      }
      else if(_2ndsmall > arr[i] && small != arr[i])
      {
          _2ndsmall=arr[i];
      }
    }
    return _2ndsmall;
}
int main()
{
    int arr[6]={9,5,2,6,7,9};

    int ssmall=find2ndsmallst(arr,6);
    cout<<"2nd smallest element is: "<<ssmall<<endl;
    return 0;
}
