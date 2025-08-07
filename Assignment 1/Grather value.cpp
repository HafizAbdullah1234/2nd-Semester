//FA21-BCS-166
//HAFIZ BDULLAH MUNIR
//Q NO 3 Find the youngest age
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	cout<<"Enter lenght ";
	cin>>a;
	cout<<"Enter breath ";
	cin>>b;
	c=a*b;
	d=2*(a+b);
	if(c>d)
	cout<<"Area is grather than perimeter";
	else
	cout<<"Area is less than perimeter";
	return 0;	
}
