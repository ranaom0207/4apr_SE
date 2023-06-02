#include<iostream>
using namespace std;
class father 
{
	public:
		void house()
		{
			cout<<"have 3 bhk house";
			
		}
};
class son : public father
{
	public:
		void car()
		{
			cout<<"\n audi car";
		}
};
main()
{
	son obj;
	obj.house();
	obj.car();
}
