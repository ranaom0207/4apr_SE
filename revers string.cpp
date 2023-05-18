#include<stdio.h>
#include<string.h>
main()
{   
	char ch[20];
	printf("enter the number revser :-");
	gets("%s",ch);
	
	
	if(ch[20] != '\n')
	{
		stringReverse(ch[20]);
		printf("%c", ch[20]);
	}
	else 
	{ printf("not revers");
	}

	
	
}
