/* write a program to accept the range of numbers,
Check if individual number of that range is a prime number,
print the prime numbers in that range
*/
/* A number is said to be a prime number only if it is divisible by 1 and itself.
which means A prime number should have only one factor i.e., itself other than 1.
*/

#include<stdio.h>
int main()
{
	int a,b;
	//Enter the range in between which the prime numbers to be printed
	scanf("%d",&a);
	scanf("%d",&b);
	int i,j;
	for(i=a;i<=b;i++) // picking individual number in range 
	{
		int c = 0;
		for(j=2;j<=i;j++)  //Taking numbers from 2 to that individual number for checking factors
		{
			if(i%j==0) //checking factors of each picked individual number and 
			{
				c++;
			}
		}
		if(c==1)
		{
			printf("%d ",i); // printing each individual prime number in given range
		}
	}
	return 0;
}
