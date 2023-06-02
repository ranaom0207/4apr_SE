#include<iostream>
using namespace std;
class father 
{
	public:
		void fishing()
		{
			cout<<"learn fishing";
			
		}
};
class mother
{
	public:
		void cooking()
		{
			cout<	<"\n learn cook";
		}
};
class son : public mother,public father
{
	public :
		void coding()
		{
			cout<<"\n learn coding";
		}
};
main()
{
	son obj;
	obj.fishing();
	obj.cooking();
	obj.coding();
}
