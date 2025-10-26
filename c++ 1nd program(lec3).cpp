#include<iostream>
using namespace std;
int main()
{
	/*int a;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"value of a is: "<<a<<endl;
	
	if(a>0)
	cout<<"a is positive"<<endl;
	else if(a<0)
	cout<<"a is negative"<<endl;
	else
	cout<<"the value of a is 0"<<endl;
	
	int a,b;
	cin>>a>>b;
	//a=cin.get();
	cout<<"the value of a,b is: "<<a<<b<<endl;
	
	int a,b,c;
	cout<<"enter the value of a:";
	cin>>a;
	cout<<"enter the value of b:";
	cin>>b;
	cout<<"enter the value of c:";
	cin>>c;
	
	if(a>b)
	{
		if(a>c)
		cout<<"a is greater"<<endl;
		else
		cout<<"c is greater"<<endl;
	}
	else 
	{
		if(b>c)
		cout<<"b is greater"<<endl;
		else
		cout<<"c is greater"<<endl;
	}*/
	char ch;
	cout<<"enter character";
	cin>>ch;
	
	if(ch>='a' && ch<='z')
	cout<<ch<<" is a lower case character"<<endl;
	
	else if(ch>='A' && ch<='Z')
	cout<<ch<<" is upper case character"<<endl;
	
	else if(ch>='0' && ch<='9')
	cout<<ch<<" is intiger between(0-9)"<<endl;
	
	else
	cout<<ch<<" is not a letter nor digit"<<endl;
	
	return 0;
}
