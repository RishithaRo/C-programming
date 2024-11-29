// Write a program to accept a number n and print the nth table
// while loop
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	scanf("%d",&n);
	while(i<=10)
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	return 0;
}

// do-while loop
#include<stdio.h>
int main()
{
	int i,n;
	i=1;
	scanf("%d",&n);
	do
	{
		printf("%d * %d = %d\n",n,i,n*i);
		i++;
	}
	while(i<=10);
	return 0;
}

//for loop
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}
