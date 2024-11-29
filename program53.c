/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
//method1

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i>j)
			{
				printf("%d",j);
			}
			else if(i==j)
			{
				printf("%d",j);
			}
		}
		printf("\n");
	}
}

//method2

#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

















