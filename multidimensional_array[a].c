#include<stdio.h>
main()
{
	int a[2][3]={1,2,3,4,5,6,};	
	int b[2][3]={1,1,4,6,2,9};
	int c[2][30];
	int row, col;
	printf("\n first matrix \n");
	for(row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{printf("  %d ",a[row][col]);
		}printf("\n");
	}
		printf("\n second matrix \n");
	for(row=0;row<2;row++)
	{
		for (col=0;col<3;col++)
		{printf("  %d ",b[row][col]);
		}printf("\n");
	}
	}

