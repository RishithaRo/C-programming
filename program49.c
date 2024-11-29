/*
Write a program to find the sum of the second factors of a num.
i/p:-- 10		hint:--		10-->i/p
o/p:-- 28 				1,2,5,10
						1, 1,2, 1,5, 1,2,5,10
*/
#include<stdio.h>
int main()
{
	int num,i,j;
	scanf("%d",&num);
	int x = num;
	int sum = 0;
	for(i=1;i<=num;i++)
	{
		if(num%i == 0)
		{
			int r = i; //First Factor
			for(j=1;j<=r;j++) //Finding second factor of each first factor
			{
				if(r%j==0) //Second factor
				{
					sum = sum + j;
				}
			}
			
		}
	}
	printf("%d",sum);
	return 0;
}
