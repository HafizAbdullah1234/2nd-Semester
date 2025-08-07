#include<iostream>
using namespace std;
int main()
{
	int a,b,c,average;
	cout<<"Enter 3 test scores";
	cin>>a>>b>>c;
	average=(a+b+c)/3;
	if(average>95)
	{
		cout<<"Congratulation"<<endl;
		cout<<"Bless you"<<endl;
		cout<<"You deserve a party"<<endl;
	}

	else
	cout<<"You need to work";
	return 0;
	
}
