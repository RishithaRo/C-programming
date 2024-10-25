// write a program to accept a number and print it is a prime number or not
/* A number is said to be a prime number only if it is divisible by 1 and itself.
which means A prime number should have only one factor i.e., itself other than 1.
*/

#include<stdio.h>
int main()
{
	int num,i;
	scanf("%d",&num);
	int c = 0;
	for(i=2;i<=num;i++) //checking factors of num otherthan 1
	{
		if(num%i==0)
		{
			c++;
		}
	}
	if(c==1) // To tell a num as prime, it should have only 1 factor otherthan 1
	{
		printf("Prime number..");
	}
	else
	{
		printf("Not a prime number..");
	}
	return 0;
}
