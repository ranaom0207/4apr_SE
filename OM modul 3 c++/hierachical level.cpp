#include<iostream>
using namespace std;
class Animal
{
	public :
		void info()
		
		{
			cout<<"\ni am animal";
			
		}
};
class dog : public Animal

{
	public:
		void bark()
		{
			cout<<"\ndog is barking ";
			
		}
};
class cat : public Animal
{
	public:
		void meow()
		{
			cout<<"\ncat";
			
		}
};
main()
{
	dog d1;
	d1.info();
	d1.bark();
	
	cat c1;
	
	c1.meow();
}
