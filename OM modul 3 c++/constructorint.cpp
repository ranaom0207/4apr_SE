#include<iostream>
using namespace std;
class student 
{
	public:
		student() // constructor
		{ 
		cout<<"\n hello and weclome to the constrator";
		
		}
		student(int a,int b)
		{
			cout<<"\n a= "<<a;
			cout<<"\n b= "<<b;
			
			
		}
	
};
main()
{
	student s1=student();
	student s2=student(10,20);
	
}

