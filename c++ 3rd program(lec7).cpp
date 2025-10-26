#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int num;
	cout<<"enter number: ";
	cin>>num;
	int i;
	
	for(i=0;i<30;i++)
	{
		if(num==pow(2,i))
		{
			cout<<"True"<<endl;
			return 0;
		}
	}
	cout<<"False"<<endl;
	
	return 0;
}
