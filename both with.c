#include<stdio.h>
int sum(int,int);

main()
{
	int a,b,result;
	printf("\n we are going to calulate sum of number");
	printf("enter the number a and b");
	scanf("%d %d",&a,&b);
	result=sum(a,b);
	printf("\n the sum is %d",result);
	
	
	
	}
	
	int sum(int a,int b)
	{
		return a+b;
	}
