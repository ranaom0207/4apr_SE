#include <stdio.h>
 
 main()
{
 
int num,i;
int f = 1;    
 
printf("Enter a number:");    
scanf("%d",&num);  
 
for (i=num; i>=1; i--)   
{  
f = f * i;  
}  
 
printf ("%d = %d+%d",num,f);  
}
