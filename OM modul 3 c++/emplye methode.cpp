#include<iostream>
using namespace std;
class student
{public:
	 
	  int id;
	  string name ;
	  int salary;
	  int age;
	  void inputdata()
	  {
	  	cout<<"enter the id: ";
	  	cin>>id;
	  	cout<<"enther name :-";
	  	cin>>name;
	  	cout<<"enther salary:-";
	  	cin>>salary;
	  	cout<<"enther age:-";
	  	cin>>age;
	  }
	  void displaydata()
	  {
	  	cout<<"id:"<<id;
	  	cout<<"\nname:"<<name;
	  	cout<<"salary\n"<<salary;
	  	cout<<"\nage"<<age;
	  }
	
	
 }; 
 main()
 {student s1;
 
  
   s1.inputdata();
   s1.displaydata();
   
   
   
    }
