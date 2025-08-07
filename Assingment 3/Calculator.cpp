#include<iostream>
using namespace std;
void det(int a,int b,int d)
{
	
	if(d==1)
	{
	cout<<a+b;	
	}
	else if(d==2)
	{
	cout<<a-b;	
	}
	else if(d==3)
	{
	cout<<a*b;	
	}
	else if(d==4)
	{
	cout<<a/b;	
	}
	else
	cout<<"Undefined";
}
int main()
{
int a,b,d;
cout<<"Enter first number ";
cin>>a;
cout<<"Enter second number ";
cin>>b;
cout<<"Enter 1 for add"<<endl;	
cout<<"Enter 2 for sub"<<endl;
cout<<"Enter 3 for mul"<<endl;
cout<<"Enter 4 for dev"<<endl;
cin>>d;
cout<<"Your answer is ";
det(a,b,d);
}
