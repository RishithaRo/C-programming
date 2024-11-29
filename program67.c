/*
write a program to take the size of the array,
accept elements of the array,
if even elements present in array, swap adjacent elements and print the array
if odd elements present in array, swap adjacent elements except last element
and print the array
*/
// method 1
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
	if(size%2==0)
	{
		for(i=0;i<size;i+=2)
		{	
			arr[i] = arr[i]^arr[i+1];
			arr[i+1] = arr[i]^arr[i+1];
			arr[i] = arr[i]^arr[i+1];
		}
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}	
	}
	else
	{
		for(i=0;i<size-1;i+=2) 
		{
			arr[i] = arr[i]^arr[i+1];
			arr[i+1] = arr[i]^arr[i+1];
			arr[i] = arr[i]^arr[i+1];
		}
		for(i=0;i<size;i++)
		{
			printf("%d ",arr[i]);
		}
	}
	return 0;
}

// with method1, we face both time complexity and space complexity, To avoid that we use method2


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
	for(i=0;i<size-1;i+=2) 
/*This works for both even and odd numbers 
as we are swapping 2 adjacent numbers just 
by taking index of first number to be swapped.
if size is 6, we swap 0 and 1 using 0, swap 2 and 3 using 2,
swap 4 and 5 indexed values using 4
*/
	{
		arr[i]=arr[i]^arr[i+1];
		arr[i+1]=arr[i]^arr[i+1];
		arr[i]=arr[i]^arr[i+1];
	}
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

















