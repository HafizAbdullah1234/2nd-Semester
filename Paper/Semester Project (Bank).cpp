#include <iostream>
#include<string>
using namespace std;
void current();
void saving ();
int main (){
	int choise;
	cout<<"\n********Wellcome in ABC Bank********"<<endl;
	cout<<"Enter:\n\t1 for current Account \n\t2 for Saving Account"<<endl;
	cout<<"Enter a number:";
	cin>>choise;
	switch(choise) {
		case 1:{
			current();
			
			break;
		}
		case 2:{
			saving();
			
			break;
		}
	
	default:{
		cout<<"invlid input"<<endl;
		break;
	}
}
return 0;
}



void current(){
	int tax,bal=1500;
	
	string name,address;
	float cnic;
	cout<<"Enter your Name"<<endl;
	cin>>name;
	cout<<"Enter your CNIC"<<endl;
	cin>>cnic;
	cout<<"Enter your Adress"<<endl;
	cin>>address;
	cout<<"Enter your current balance"<<endl;
	cin>>bal;

	if (bal>=1000)
	{
		int chose;
		cout<<"you have a free cash book-----"<<"Enter 1 for Debit---------"
		<<"Enter 2 for credit---------"<<endl;
		cin>>chose;
		switch(chose) {
					case 1:{
				int am;
				cout<<"Enter yor ammount for transaction "<<endl;
				cin>>am;
				if (am<=bal){
					int rema= bal-am;
				cout<<"Now your remaning ammount is "<<rema<<endl;
				}
				else{
					cout<<"you have insufitent balance please refill your account"<<endl;
				}
				
				break;
		}
			case 2:{
				int amo;
				cout<<"Enter yor ammount for addition "<<endl;
				cin>>amo;
				int actual=bal+amo;
				cout<<"Now your New ammount is "<<actual<<endl;
				break;
			}
			
	default:{
			cout<<"invalid input"<<endl;
		break;
	}
}
	
			}
		else if(bal<1000){
			float tax= 7/100*bal;
			cout<<"your panelity tax is "<<tax<<endl;
		}
	}

	void saving(){
		int bal=700;
		float cnic;
	string name,address;
	cout<<"Enter your Name"<<endl;
	cin>>name;
	cout<<"Enter your CNIC"<<endl;
	cin>>cnic;
	cout<<"Enter your Adress"<<endl;
	cin>>address;
	cout<<"Enter your current balance"<<endl;
	cin>>bal;

if (bal>=1500)
	{ int cho;
		cout<<"Now you are able to get cash book "<<endl<<"Enter 1 to get the cash book-------"
		<<"Enter 2 for Debit ammount--------"<<"Enter 3 for Credit ammount"<<endl;
		cin>>cho;
		switch(cho) {
			case 1:{
				 int rem=bal-1500;
				 cout<<"Congratulations you have now cash book and your remaning ammount is "<<rem<<endl;
				break;
			}
			case 2:{
				int am;
				cout<<"Enter yor ammount for transaction "<<endl;
				cin>>am;
				if (am<=bal){
					int rema= bal-am;
				cout<<"Now your remaning ammount is "<<rema<<endl;
				}
				else{
					cout<<"you have insufitent balance please refill your account"<<endl;
				}
				
				break;
			}
			case 3:{
				int amo;
				cout<<"Enter yor ammount for addition "<<endl;
				cin>>amo;
				int actual=bal+amo;
				cout<<"Now your New ammount is "<<actual<<endl;
				break;
			}
			
			
	default:{
		cout<<"invalid input"<<endl;
		
		break;
	}
}
		
			}
			else if (bal>=500 || bal <1500){
				cout<<"you are not able to get cash book"<<endl;
			}
		
else if(bal<500){
			float tax= 5/100*bal;
			cout<<"your panelity tax is "<<tax<<endl;
		}
}











