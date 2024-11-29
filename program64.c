/*
write a program to take the size of the array,
accept elements of the array,
print the repeated elements of array
*/
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size];
	int i,j;
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		int count = 0, x = 0;
		for(j=i;j<size;j++) //comparing each element with its next elements
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>1)
		{
			x = arr[i];
			printf("%d",x);
		}
	}
	return 0;
}
