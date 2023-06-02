#include<iostream>


using namespace std;

class chooseWinner
{
  public:
  	string uchoice,computer,youchoice,paper,scisser,rock;
		 
 	void choose()

    {
    
    	
		
		if(youchoice == rock && computer == paper)
		{
			cout<<"\nyour choice is rock and computer choice is paper = computer win";
			
		}
		else if (uchoice ==paper&& computer ==sciesser)
		{
			cout<< "\nyour choice paper and computer choice scisser = computer win";
			
		}
		else if ( uchoice == sciesser&&computer == rock)
		{
			cout<<"\ncomputer win";
		}
		else if (uchoice == rock&& computer ==sciesser)
		{
			cout<<"congrate you win";
			
		}
		else if (uchoice == sciesser&& computer == )
		{
			cout<<"congrate you win";
			
		}
		else if (uchoice == 2&& computer ==1)
		{
			cout<<"congrate you win";
			
		}
    }
   
   

};

main()
{
	 
	
	 
}

