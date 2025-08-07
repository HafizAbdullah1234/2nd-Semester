#include<iostream>
using namespace std;
int main()
{
	int a[5]; int *p=a;
	for(int i=0; i<5; i++)
	{
		cin>>a[i];
	}
	cout<<&a[0];
	cout<<&a[1]+4;
	cout<<&a[2]+8;
	cout<<&a[3]+12;
	cout<<&a[4]+16;
}
