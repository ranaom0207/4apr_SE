#include<iostream>
using namespace std;
class A
{
	private:
		int x,y;
	public:
		friend void setdata();
			
};
void setdata()
{
	A obj;
	obj.x=10;
	obj.y=50;
	cout<<"x="<<obj.x<<end1;
	cout<<"y= "<<obj.y<<end1;
	
}
main()
{
	setdata();
}
