#include<iostream>
using namespace std;
int main()
{
	int temp, a[10];
	cout<<"Enter array elements"<<endl;
	for(int i=0; i<10; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<10; i++)
	{
	for(int j=i+1; j<=10; j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}	
	}
	

	for(int i=10; i>1; i--)
	{
		cout<<a[i]<<" ";
	}
}
