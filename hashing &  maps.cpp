#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cout<<"enter size of an array: ";
	cin>>n;
	
	cout<<"enter elements: ";
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	
	//precomputation
	int hash[13]={0};
	for(i=0;i<n;i++)
	{
		hash[arr[i]]+=1;
	}
	
	int q;
	cout<<"how many element you want to search: ";
	cin>>q;
	while(q--)
	{
		int number;
		cout<<"Enter elements: ";
		cin>>number;
		//fetch
		cout<<hash[number]<<endl;
	}
	return 0;
}
