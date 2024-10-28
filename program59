/*
write a program to take the size of the array,
accept elements of the array, 
swap the 2nd element of array from first 
with 2nd element of array from last in the array and
print the swapped array
*/
//method 1
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
	//swapping the 2nd element from first with 2nd element from last
	arr[1] = arr[1]^arr[size-2];
	arr[size-2] = arr[1]^arr[size-2];
	arr[1] = arr[1]^arr[size-2];
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

//method2

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
	arr[1]=x;
	arr[size-2]=y;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}














