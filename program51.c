/*
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=5;j>=1;j--)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
}
