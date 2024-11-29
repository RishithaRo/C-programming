/* 
write a program to take the size of the array,
accept elements of the array,
accept the number of times the array to be rotated ,
PRINT THE ROTATED ARRAY.
i/p:-- 6 					o/p:--
8 1 5 4 3 7							3 7 8 1 5 4
2

*/

#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	int i;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int rotate;
	scanf("%d",&rotate);
	int x;
	x = size - rotate;
	for(i=x;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	for(i=0;i<x;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
