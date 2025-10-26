#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*string name;
	cout<<"Enter your name: ";
	getline(cin,name);
	cout<<"Hello,"<<name<<endl;*/
	
	int day;
	cout<<"enter no of day: ";
	cin>>day;
	
	switch(day)
	{
		case 1:cout<<"Monday"<<endl;
		break;
		case 2:cout<<"Tuesday"<<endl;
		break;
		case 3:cout<<"Wednesday"<<endl;
		break;
		case 4:cout<<"Thursday"<<endl;
		break;
		case 5:cout<<"Friday"<<endl;
		break;
		case 6:cout<<"saturday"<<endl;
		break;
		case 7:cout<<"sunday"<<endl;
		break;
		default:cout<<"wrong input! pls check what you are entered"<<endl;
	}
	return 0;
}
