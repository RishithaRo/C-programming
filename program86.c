// prog to count number of digits using recursion

#include<stdio.h>
int count(int);
int main()
{
	int num;
	scanf("%d",&num);
	int c = count(num);
	printf("%d",c);
}
int count(int a)
{
	if(a>0)
	{
		a=a/10;
		return 1+count(a);
	}
	else
	{
		return 0;
	}
}
