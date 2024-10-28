/*
write a program to take the size of the array,
accept elements of the array, and 
find the largest value in the array
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
	int max = arr[0];
	// if we assign max with 0, then it will work only for array with positive values
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("%d",max);
	return 0;
}
