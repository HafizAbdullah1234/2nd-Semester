#include<iostream>
using namespace std;
int main()
{
	int a,b,c,average;
	cout<<"Enter 3 test scores";
	cin>>a>>b>>c;
	average=(a+b+c)/3;
	if(average>95)
	cout<<"Congratulation";
	else
	cout<<"You need to work";
	return 0;
	
}
