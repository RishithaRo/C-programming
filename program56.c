/*write a program to take the size of the array,
and accept the elements of the array,
then print the sum of all the elements in the array 
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
	int sum = 0;
	for(i=0;i<size;i++)
	{
		sum = sum + arr[i];
	}
	printf("%d",sum);
	return 0;
}
