#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
	
}
float sum(float a,float b)
{
	return a+b;
	
};
main()

{
	cout<<"\ntotal:- "<<sum(10,200);
	cout<<"\ntotal:- "<<sum(10,20,50);
	cout<<"\ntotal:- "<<sum(10.45f,85.36f);
	
}
