// Write a program to accept size of a star matrix and print the matrix
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int i,j;
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=size;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
