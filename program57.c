/*
write a program to take the size of the array,
and accept the elements of the array,
calculate sum of odd numbers and even numbers of array elements,
print the difference between odd numbers sum and even numbers sum.
Note:-- The difference should always a positive number
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	int i;
	int even = 0,odd = 0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even = even + arr[i];
		}
		else
		{
			odd = odd + arr[i];
		}
	}
	int diff;
	//diff = (even>odd)?even - odd: odd-even;
	diff = abs(even-odd); 
	// abs() function always returns positive value 
	// abs() function is a pre-defined function inside stdlib library file
	printf("%d",diff);
	return 0;
}
