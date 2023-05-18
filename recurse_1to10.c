#include<stdio.h>
 int printf_1to10(int x)
 {
 	if(x<=10)
 	{ printf("%d\n",x);
	    printf_1to10(x+1);
		 
	  }
 }
 main()
 {
 	printf_1to10(1);
 }
