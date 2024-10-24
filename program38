// write a program to accept a number and print Yes if it is a perfect number.Other wise print no.
/* A number is said to be a perfect number 
if the sum of its factors other than itself is equal to that number.
*/
#include<stdio.h>
int main()
{
	int num,sum = 0;
	int i;
	scanf("%d",&num);
	for(i=1;i<num;i++)
	{
		if(num%i==0) //factors
		{
			sum = sum + i; //Finding sum of all factors of num except itself
		}
	}
	if(sum==num)
	{
		printf("Yes..");
	}
	else
	{
		printf("No..");
	}
	return 0;	
}

// reducing time complexity
// method 2
#include<stdio.h>
int main()
{
	int num,sum = 0;
	scanf("%d",&num);
/* The factors of any number other than itself, 
confirmly they will be in the range of half of that number.
ex:-- 10-->1,2,5(in the range 10/2) 6-->1,2,3 (in the range 6/2)
*/
	int i;
	for(i=1;i<=num/2;i++)
	{
	if(num%i==0) //factors
	{
		sum = sum + i; //Finding sum of all factors of num except itself
	}	
	}
	if(sum==num)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
