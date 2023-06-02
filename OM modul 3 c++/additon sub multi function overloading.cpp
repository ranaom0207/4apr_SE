#include<iostream>
using namespace std;
int sum(int a, int b)
{
	return a+b;
}

   int sum(int  a,int  b)
{
	return a-b;
	
}
    int sum(int a,int b)
{
	return a*b;
	
}
int sum(int a,int b)
{
	return a/b;
	
};
main()

{
	cout<<"\ntotal:- "<<sum(10,200);
	cout<<"\ntotal:- "<<sum(10,84);
	cout<<"\ntotal:- "<<sum(10,285);
	cout<<"\ntotal:- "<<sum(10,85);
	
}
