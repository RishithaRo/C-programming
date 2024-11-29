/*write a program to take the size of the array,
and then print the number of elemets in the array 
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
	int count = 0;
	for(i=0;i<size;i++)
	{
		count++;
	}
	printf("%d",count);
	return 0;
}
