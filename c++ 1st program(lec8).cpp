#include<iostream>
#include<cstdlib>//required for exit
using namespace std;
int main()
{
	char operatar;
	int num1,num2;
	cout<<"enter 0 to exit: "<<endl;
	while(1)
	{
	    
	    cout<<"enter operator(+,-,*,/,%): ";
	    cin>>operatar;
	    
	    if(operatar=='0')
	    {
	    	cout<<"exit from this loop"<<endl;
	            exit(0);
		}
	    
	    cout<<"enter two number: ";
	    cin>>num1>>num2;
	    
	    switch(operatar) 
	    	{
	    case '+':cout<<"addition of two number is: "<<num1+num2<<endl;
	    break;
	    
	    case '-':cout<<"substruction of two number is: "<<num1-num2<<endl;
	    break;
	    
	    case '*':cout<<"multiplication of two number is: "<<num1*num2<<endl;
	    break;
	    
	    case '/':cout<<"divition of two number is: "<<num1/num2<<endl;
	    break;
	    
	    case '%':cout<<"remainder after divition of two number is: "<<num1%num2<<endl;
	    break;
	    
	    default:cout<<"pls enter a valid operation operation"<<endl;
			}
	}
	return 0;
}
