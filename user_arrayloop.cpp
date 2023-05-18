#include<stdio.h>
main(){
	
	
	int marks[5];//declering array

	int i;//initirialzTION
	
	
	for (i=0;i<5;i++)//for loop to scan the array
	{ printf("enter the marks %d:-",i+1);//enter the value of array
	scanf("%d",&marks[i]);//scan array
	}
	for(i=0;i<5;i++)
	//for loop to print array
	
	{
		printf("\n%d",marks[i]);//printing arra
	}

}
