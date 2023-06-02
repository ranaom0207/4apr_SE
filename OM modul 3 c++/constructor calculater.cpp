#include<iostream>
using namespace std;
class student 
{
	public:
		int n1,n2;
		int addition,sub,multi,divison;
		student() // constructor
		{ 
		cout<<"enter the number n1 :-";
		cin>>n1;
		cout<<"enter the number n2 :-";
		cin>>n2;
		
			addition=n1+n2;
	 	cout<<addition<<"\n";
	 	 
		 	sub=n1-n2;
	 	cout<<sub<<"\n";
	 	
		 	multi=n1*n2;
	 	cout<<multi<<"\n";
	 		
			 divison=n1/n2;
	 	cout<<divison<<"\n";
		
	 	
		
		}
	
};
main()
{
	student s1=student();
}

