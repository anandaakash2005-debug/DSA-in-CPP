#include<bits/stdc++.h>
using namespace std;
bool chksrt(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            break;
        }
        return true;
    }
    return false;
}
int main()
{
    int arr[6]={1,2,3,4,5,6};

    int srt=chksrt(arr,6);
    if(srt==1)
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}
