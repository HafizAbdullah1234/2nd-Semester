#include<iostream>
using namespace std;
int main()
{
	int a[5],temp;
	for(int i=0; i<5; i++)
	{
		cout<<"Enter values";
		cin>>a[i];
	}
	cout<<"Original values in array ";
	for(int i=0; i<5; i++)
	cout<<a[i]<<" ";
		for(int i=0; i<5; i++)
		for(int j=0; j<4; j++)
		if(a[j]>a[j+1])
		{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		cout<<"The sorted array";
		for(int i=0; i<5; i++)
	cout<<a[i]<<" ";
}
