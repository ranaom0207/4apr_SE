#include<iostream>
using namespace std;
template <class t>

void maxnum (t  &a,t &b)
{
	t  T=a;
	a=b;
	b=T;
	
}
main()
{
	char a='a',b='g';
	int x=41,y=45;
//	cout<<"enter the a :_";
//	cin>>a;
//	
//	cout<<"enter the b :_";
//	cin>>b;
//	cout<<"enter the x :_";
//	cin>>x;
//	cout<<"enter the y :_";
//	cin>>y;
//	
	
	
	cout<<"before swap A:"<<a<<"| B:"<<b<<endl;
	maxnum(a>b);
		cout<<"after swap A:"<<a<<"| B :"<<b<<endl;
		
		
			cout<<"before swap x:"<<x<<"| y:"<<y<<endl;
			maxnum(x<y);
				cout<<"before swap x:"<<x<<"| y:"<<y<<endl;
}
