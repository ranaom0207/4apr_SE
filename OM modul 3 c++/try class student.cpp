#include<iostream>
using namespace std;
class student
{
	public:
		void rollnum()
		{
			cout<<"roll number 1";
			cout<<"roll number 2";
			cout<<"roll number 3";
		}
		
class test:public student
{
	public: 
	void mark()
	{
		cout<<" roll number 1 :_ 95";
		cout<<" roll number 2 :_ 90";
		cout<<" roll number 3 :_ 85";
								
	}
}
class test2:public test
{
	public:
		void mark2()
{
	cout<<"roll number 1 :_ 85";
	cout<<"roll number 2 :_ 83";
	cout<<"roll number 3 :_ 80";
	
}};

main()
{
	test2 obj;
	obj.
  
}

