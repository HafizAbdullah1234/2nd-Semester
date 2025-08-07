#include<iostream>
using namespace std;
int main()
{
	char employed,grade;
	cout<<"Answer the following uestions"<<endl;
	cout<<"Give your answer in yes or not"<<endl;
	cout<<"Enter y for yes and N for no"<<endl;
	cin>>employed;
		cout<<"Have you graduate from college"<<endl;
		cout<<"Enter your grade"<<endl;
    cin>>grade;  
	if(employed=='y')
	{
		if(grade=='f')
		cout<<"You cannot apply";
		else if(grade=='c')
		cout<<"You can apply in BBA";
		else if(grade=='b')
		cout<<"You can apply in CS";
		else if(grade=='a')
		cout<<"You can apply in every field";
	}
	
	 return 0;
	
}
