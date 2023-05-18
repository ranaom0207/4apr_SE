#include<stdio.h>
main()
{
	int month;
	printf("enter the month no");
	 scanf("%d",&month);
	 
	  switch (month)
	  {
	  	case 1:
	  		 printf("january :-31");
	  		 break;
	  	
	  	
	  		case 2:
	  		 printf("febuary :-29");
	  		 break;
	  		 
	  		 
	  		 	case 3:
	  		 printf("march :-31");
	  		 break;
	  		 
	  		 	case 4:
	  		 printf("april :-30");
	  		 break;
	  		 
	  		 
	  		 	case 5:
	  		 printf("may :-31");
	  		 break;
	  		 
	  		 
	  		 
	  		 	case 6:
	  		 printf("june:-30");
	  		 break;
	  		 
	  		   case 7:
	  		 printf("july:-31");
	  		 break;
	  		 
	  		 	case 8:
	  		 printf("augest:-30");
	  		 break;
	  	
	  		case 9:
	  		 printf("sept:-31");
	  		 break;
	  	
	  		case 10:
	  		 printf("oct:-30");
	  		 break;
	  	
	  		case 11:
	  		 printf("november:-31");
	  		 break;
	  	
	  		case 12:
	  		 printf("decmeber:-30");
	  		 break;
	  	
	  		 
	  		 
	  		 default:
	  		 	 printf("invaild input");
	  		 
	  }
	
	
}
