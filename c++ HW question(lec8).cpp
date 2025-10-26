#include<iostream>
using namespace std;
int main()
{
	int type,amount;
	cout<<"enter total amount: ";
	cin>>amount;
	cout<<"how many entered type notes is present(enter x to see number of all types)"<<endl;
	cout<<"enter type of notes(100,50,20,1): ";
	cin>>type;
	
	int x=amount/100;
	int y=(amount%100)/50;
	int z=((amount%100)%50)/20;
	int a=(((amount%100)%50)%20)/1;
	
	switch(type)
	{
		case 100:cout<<"there are "<<amount/100<<" notes is present"<<endl;
		
		case 50:cout<<"there are "<<amount/50<<" notes is present"<<endl;
		
		case 20:cout<<"there are "<<amount/20<<" notes is present"<<endl;
		
		case 1:cout<<"there are "<<amount<<" notes is present"<<endl;
		break;
		
		default:cout<<"there are "<<x<<" number of 100 rupee notes are present"<<endl;
		cout<<"there are "<<y<<" number of 50 rupee notes are present"<<endl;
		cout<<"there are "<<z<<" number of 20 rupee notes are present"<<endl;
		cout<<"there are "<<a<<" number of 1 rupee notes are present"<<endl;
	} 
	
	return 0;
}
