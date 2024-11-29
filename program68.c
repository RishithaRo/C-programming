/* write a program to accept size of a two-dimensional array,
Find the sum of elements of each row and 
print biggest sum and its corresponding row
i/p:- 3
3 1 5 4 2 7 9 1 6
o/p:-
3=>16
*/
// method 1
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size][size];
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int ar[size],k=0;
//	int sum1 = 0 ,sum2=0,sum3=0;
	for(i=0;i<size;i++)
	{
		int sum = 0;
		for(j=0;j<size;j++)
		{
			sum = sum+arr[i][j];
		}
		ar[k++]=sum; //array with sum values
	}
	//Now, we should find maximm element of array
	int max = 0,row=0;
	for(i=0;i<size;i++)
	{
		if(ar[i]>max)
		{
			max = ar[i]; //maximum sum value, row val is index+1 of maximum sum val
			row = i+1;
		}
	}
	printf("%d=>%d",row,max);
	return 0;
}

//method2
#include<stdio.h>
int main()
{
	int size;
	scanf("%d",&size);
	int arr[size][size];
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int max =0,val=0;
	for(i=0;i<size;i++)
	{
		int sum = 0;
		for(j=0;j<size;j++)
		{
			sum = sum+arr[i][j];
		}
		if(sum>max)
		{
			max = sum;
			val = i+1;
		}
	}
	printf("%d=>%d",val,max);
	return 0;
}




















