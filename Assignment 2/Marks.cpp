//FA21-BCS-166
//HAFIZ ABDULLAH MUNIR
//This programme can use for marks.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cout<<"Marks in ECC=";
	cin>>a;
	cout<<"Marks in MATH=";
	cin>>b;
	cout<<"Marks in PHY=";
	cin>>c;
	cout<<"Marks in URDU=";
	cin>>d;
	cout<<"Marks in ISLAMYAT=";
	cin>>e;
	f=a+b+c+d+e;
	cout<<"Obtained marks"<<f<<endl;
	cout<<"Your percentage"<<f*100/500;	
}
