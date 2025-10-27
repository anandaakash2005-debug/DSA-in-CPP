#include<bits/stdc++.h>
using namespace std;
int findlargest(int arr[],int n)
{
    int count=0;
    int lrg=arr[0];
    for(int i=1;i<n;i++)
    {
       if(lrg<arr[i])
       {
           int count=i;
       }
    }
    return count;
}
int main()
{
    int arr[6]={9,5,2,6,7,4};

    int lrg=findlargest(arr,6);
    cout<<"largest element is: "<<arr[lrg]<<endl;
    return 0;
}
