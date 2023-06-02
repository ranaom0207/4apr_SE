#include<iostream>
using namespace std;
class grandfather
{
	public:
		void land()
		{
			cout<<"100 acres of land";
			
		}
};
class father : public grandfather 
{
	public :
		void house ()
		{
			cout<<"\n5 bhk house";
		}
};
class son : public father
{
	public :
		void car()
		{
			cout<<"\nbuggati";
			
		}
};
main()
{
	son obj;
	obj.land();
	obj.house();
	obj.car();
	
}
