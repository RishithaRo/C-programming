/*
write a program to take the size of the array,
accept elements of the array, and 
find the smallest value(minimum value) in the array
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
	int min = arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	printf("%d",min);
	return 0;
}
