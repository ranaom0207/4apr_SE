#include<iostream>
using namespace std;
class student
{
	public:
		int id;
		string sunject;
		string name;
		
		void setID(int id)
		{
			 this->id=id;
			
			 
		}
		int getID()
		{
		 return this->id =id;
			
		}
		void setname(string name )
		{
			this->name= name;
			
		}
		string getname()
		{
			return this->name=name;
			
		}
};
main()
{
	student s1;
  s1.setID(2);
	cout<<s1.getID();
	s1.setname("om");
	s1.getname();
}
