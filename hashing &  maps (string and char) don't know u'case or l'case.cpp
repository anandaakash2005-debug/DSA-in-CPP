#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cout<<"Enter a string: ";
    cin>>s;

    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {

        hash[s[i]]+=1;
    }

    int q;
    cout<<"Enter how many character you want to search: ";
    cin>>q;
    while(q--)
    {

        char ch;
        cout<<"Enter character: ";
        cin>>ch;
        cout<<hash[ch]<<endl;
    }
    return 0;
}
