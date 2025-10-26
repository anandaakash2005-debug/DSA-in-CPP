#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cout<<"Enter string: ";
	cin>>s;
	
	//precomputation
	int hash[26]={0};
	int i;
	for(i=0;i<s.size();i++)
	{
		hash[s[i] - 'a']++;
	}
	
	int q;
	cout<<"how many element you want to search: ";
	cin>>q;
	while(q--)
	{
		char c;
		cout<<"Enter character: ";
		cin>>c;
		//fetch
		cout<<hash[c-'a']<<endl;
	}
	return 0;
}
