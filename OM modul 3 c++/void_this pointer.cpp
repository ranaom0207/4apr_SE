#include<iostream>
using namespace std;
class student
{
	int a,b;
	public:
		void inputdata(int a ,int b )
		{
			this->a=a;
			this->b=b;
		}
		void displaydata()
		{
			cout<<"\n a = "<<a;
			cout<<"\n b = "<<b;
			
		}
};
main()
{
	student s1;
	s1.inputdata(10,50);
	s1.displaydata();
}
