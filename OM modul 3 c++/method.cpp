#include<iostream>
using namespace std;
class student
{public:
	 
	  int id;
	  string name ;
	  void inputdata()
	  {
	  	cout<<"enter the id: ";
	  	cin>>id;
	  	cout<<"enther name :-";
	  	cin>>name;
	  	
	  }
	  void displaydata()
	  {
	  	cout<<"id:"<<id;
	  	cout<<"\nname:"<<name;
	  }
	
	
 }; 
 main()
 {student s1;
 
  
   s1.inputdata();
   s1.displaydata();
   
   
   
    }
