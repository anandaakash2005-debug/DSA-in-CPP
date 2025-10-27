//striver's dsa sheet
//1st question 
/*#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter number";
	cin>>num;
	
	cout<<"the number is "<<num<<endl;
	
	return 0;
}*/
//2nd question
/*#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"enter marks:";
	cin>>marks;
	if(marks>=0 && marks<=100)
	{
	if(marks>=90)
	cout<<"grade A"<<endl;
	else if(marks>=70)
	cout<<"grade B"<<endl;
	else if(marks>=50)
	cout<<"grade C"<<endl;
	else if(marks>=35)
	cout<<"grade D"<<endl;
	else
	cout<<"FAIL"<<endl;
	}
	else
	cout<<"you entered wrong marks";
	return 0;
}*/
//3rd question
/*#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"enter no of day in a week: ";
	cin>>day;
	switch(day)
	{
		case 1:cout<<"Monday"<<endl;
		break;
		case 2:cout<<"tuesday"<<endl;
		break;
		case 3:cout<<"wednesday"<<endl;
		break;
		case 4:cout<<"thursday"<<endl;
		break;
		case 5:cout<<"friday"<<endl;
		break;
		case 6:cout<<"saturday"<<endl;
		break;
		case 7:cout<<"sunday"<<endl;
		break;
		default:cout<<"wrong input"<<endl;
		break;	
	}
	return 0;
}*/
//3rd question
/*#include<iostream>
using namespace std;
int main()
{
	int i=1,j,n;
	cout<<"enter number of rows: ";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=5)
		{
			cout<<"*";
			j++;
		} 
		cout<<endl;
		i++;
	}
	return 0;
}*/
//4th question
/*#include<iostream>
using namespace std;
int main()
{
	int i=1,j,n;
	cout<<"enter no of rows: ";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}*/
//5th question
#include<iostream>
using namespace std;
int main()
{
	int i=1,j,n;
	cout<<"enter no of rows: ";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
