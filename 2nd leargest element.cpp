#include<bits/stdc++.h>
using namespace std;
int find2ndlergest(int arr[],int n)
{
    int lrg=0;
    int _2ndlrg=0;
    if(arr[0] > arr[1])
    {
         lrg=arr[0];
         _2ndlrg=arr[1];
    }
    else
    {
         lrg=arr[1];
         _2ndlrg=arr[0];
    }
    for(int i=2;i<n;i++)
    {
      if(lrg < arr[i])
      {
          _2ndlrg=lrg;
          lrg=arr[i];
      }
      else if(_2ndlrg < arr[i] && lrg != arr[i])
      {
          _2ndlrg=arr[i];
      }
    }
    return _2ndlrg;
}
int main()
{
    int arr[6]={9,5,2,6,7,9};

    int slrg=find2ndlergest(arr,6);
    cout<<"2nd lergest element is: "<<slrg<<endl;
    return 0;
}
