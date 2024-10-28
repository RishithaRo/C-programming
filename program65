/* 
write a program to take the size of the array,
accept elements of the array,
print the repeated elements of array only if they are even numbers.
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
	// Finding repeated element
	for(i=0;i<size;i++)
	{
		int count = 0;
		for(j=i;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>1) //repeated num
		{
			int x = arr[i]; // arr[i] is repeated num
			if(x%2 == 0) //checking if repeated num is even
			{
				printf("%d",x);
			}
		}
	}
	return 0;
}
