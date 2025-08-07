//FA21-BCS-166
//HAFIZ BDULLAH MUNIR
//Q NO 3 Find the youngest age
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter first person age ";
	cin>>a;
	cout<<"Enter second person age ";
	cin>>b;
	cout<<"Enter third person age ";
	cin>>c;
	if(a<b && a<c)
	cout<<"First person is younger "<<a;
	else if(b<c && b<a)
	cout<<"Second person is younger "<<b;
	else if(c<a && c<b)
	cout<<"Third person is younger "<<c;
	else if(a=b=c)
	cout<<"No one is younger";
	return 0;
}
