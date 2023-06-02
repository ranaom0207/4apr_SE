#include<iostream>
using namespace std;
class bank
{
	public:
	   	
		int balance,withdraw,totel;
		string name;
		void inputdata()
         {
		cout<<"enter the name :_";
	cin>>name;
	cout<<"enter the balance: -";
	cin>>balance;
	
	cout<<"enter the withdraw amount :-";
	cin>>withdraw;
	totel=balance-withdraw;
	cout<<"the balance :-"<<totel;
      }
		
		 
            void display(){
			
    cout<<"\nname :-"<<name;
    cout<<"\nbalance :-"<<balance;
    cout<<"\n withdraw amount :-"<<withdraw;
    cout<<"after the balance :- "<<balance-withdraw;
}
};


main()

{
	bank s1;
	s1.inputdata();
	s1.display();
	
}
