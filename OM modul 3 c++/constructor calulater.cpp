#include<iostream>// header file
using namespace std;
class calculator
{
	public:
	int n1,n2;
	int result;
	 void cal()
	 {
	 	cout<<"enter the n1 :_";
	 	cin>>n1;
	 	cout<<"entet the n2:_";
	 	cin>>n2;
	 	
	 	result=n1+n2;
	 	cout<<result;
	 		result=n1-n2;
	 	cout<<result;
	 		result=n1*n2;
	 	cout<<result;
	 		result=n1/n2;
	 	cout<<result;
	 }
	
	
		
};
main()
{
	 calculator s1;
	 s1.cal();
	 
}
