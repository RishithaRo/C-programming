/*
write a program to accept size of a two-dimensional array,
print the array in snake format.
i/p1:- 3							o/p:-
1 2 3							1 2 3
4 5 6							6 5 4
7 8 9							7 8 9

i/p1:- 4							o/p:-
1 2 3 10							1 2 3 10
4 5 6 11						    11 6 5 4
7 8 9 12							7 8 9 12
13 14 15 16							16 15 14 13
*/
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size][size];
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<size;i++)
	{
		if(i%2==0)
		{
			for(j=0;j<size;j++)
			{
				printf("%d ",arr[i][j]);
			}
		}
		else
		{
			for(j=size-1;j>=0;j--)
			{
				printf("%d ",arr[i][j]);
			}
		}
	}
	return 0;
}
