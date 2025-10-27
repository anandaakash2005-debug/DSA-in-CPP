#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(int i,string &s)
{
	if(i>=s.size()/2)
	return true;
	if(s[i] != s[s.size()-i-1])
	return false;
	checkpalindrome(i+1,s);
}
int main()
{
	string s="xxxx";
	cout<<checkpalindrome(0,s);
	return 0;
}
