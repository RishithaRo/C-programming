/*
write a program to take the size of the array,
and accept the elements of the array,
swap the 2nd element of array from first with
2nd element of array from last and print the swapped values
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
	int x = arr[1]; //2nd element of array from first
	int y = arr[size-2]; //2nd element of array from last
	x = x^y;
	y = x^y;
	x = x^y;
	printf("%d %d",x,y);
	return 0;
}
