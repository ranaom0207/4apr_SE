#include<iostream>
using namespace std;
class student 
{
	
	public:
		int id;
		string name;
		int marks[5]; // array eithin class
		
		void input()
		{
			cout<<"enter id :";
			cin>>id;
			cout<<"ENTER name:";
			cin>>name;
			for(int i=0;i<5;i++)
			{
				cout<<"\nmarks : ";
				cin>>marks[i];
			}
		}

      void display()

{
	cout<<"\n id :"<<id;
	cout<<"\n name : "<<name;
	for(int i=0;i<5;i++)
	{
		cout<<"\n marks = "<<marks[i];
		
	}
}
};
main()
{
	
	student s1;
    s1.input();
	s1.display();
o	
}
