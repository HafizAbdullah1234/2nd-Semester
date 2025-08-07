//FA21-BCS-166
//HAFIZ ABDULLAH MUNIR
//This prgramme can calculate factorial.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c=1;
	cout<<"Enter a number ";
	cin>>a;
	for(b=1; b<=a; b++)
	{
		c=c*b;
	}
	cout<<"Your factorial is "<<c;
	return 0;
}
