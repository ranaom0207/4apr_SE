#include<iostream>
using namespace std;
class cricketer 
{
	public:
		string name;
		 int avgrun,totelmatch,totelrun;
		
		void inputdata()
		{
			
			cout<<" \n enter the name of cricketer";
			cin>>name;
			
			cout<<"\n  enter the totel run";
			cin>>totelrun;
			
			cout<<"\n enter the totel match";
			cin>>totelmatch;
			
			
		}
		void avrgrun()
		{
			avgrun= totelrun/totelmatch;
			cout<<"\n avrager run"<<avgrun;
		}
		
};
class batsmen : public cricketer

{
	public:
		void display()
		{
			cout<<"\n name"<<name;
			cout<<"\n totel run :-"<<totelrun;
			cout<<"\n avger run :-"<<avgrun;
		}
};
main()
{
	batsmen obj;
	obj.inputdata();
	obj.avrgrun();
	obj.display();
}
