#include<stdio.h>
void login(char email[],char password[]);
main()
{
	 char e[20],p[20];
	 printf("enter email:-");
	 gets(e);
	 printf("enter password");
	 gets(p);
	 login(e,p);
	
}
void login (char email[],char password[])
{
	
	printf("\n email:-%s",email);
	printf("\n password :-%s",password);
}
