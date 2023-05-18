#include<stdio.h>
#include<string.h>

main()
{
	char s1[20],s2[20];
	
	printf("enter the s1 :=");
	gets(s1);
	
		printf("enter the s2 :=");
	gets(s2);
	
	if (strcmp(s1,s2)==0)
	{printf("both the stringn are same");
	}
	else
	{ printf("both the string are not same");
	}
	
}
