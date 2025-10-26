#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for(int i=n-1;i>=1;i--)
    {
        int did_swap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int temp=arr[j+1];
               arr[j+1]=arr[j];
               arr[j]=temp;
               did_swap=1;
            }
        }
        if(did_swap==0)
            break;
    }
}
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

      bubble_sort(arr,num);
      for(int i=0;i<num;i++)
      {
          cout<<arr[i]<<" ";
      }
      return 0;
}
