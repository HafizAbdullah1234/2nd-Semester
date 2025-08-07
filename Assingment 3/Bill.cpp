#include<iostream>
using namespace std;
int main()
{
	int unit,bill;
	cout<<"Enter your units=";
	cin>>unit;
	if(unit<=100)
	bill=unit*10;
	else if(unit<=200)
	bill=1000+(unit-100)*15;
	else
		bill=2000+(unit-100)*20;
		cout<<"Your bill="<<bill;
		return 0;
}
