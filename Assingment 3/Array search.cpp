#include<iostream>
using namespace std;
int main()
{
	int b,a[10]={11,12,13,14,15,16,17,18,19,20};
	cin>>b;
	for(int i=0; i<10; i++)
	{
		if(b==a[i])
		{
				cout<<"Element found";
		break;
		}
	
		else
		{
			cout<<"Element not found";
		}
		break;
	}
}
