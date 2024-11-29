// write a program to take the size of the array, and accept the elements of the array and then print the array
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
	for(i=0;i<size;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
