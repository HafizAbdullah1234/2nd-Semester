#include<iostream>
using namespace std;
int main()
{
	int a=10;
	void *p;
	p=&a;
	cout<<"Value of a is "<<a<<endl;
	cout<<"Adress of a is "<<&a<<endl;
	float b=5.3;
	p=&b;
	cout<<"Value of b is "<<b<<endl;
	cout<<"Adress of b is "<<&b<<endl;
	char c='c';
	p=&c;
	cout<<"Value of c is "<<c<<endl;
	cout<<"Adress of c is "<<& c<<endl;
}
