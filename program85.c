							//RECURSION

#include<stdio.h>
int fact(int);
int main()
{
	int num;
	scanf("%d",&num);
	int ans = fact(num);
	printf("%d",ans);
}
int fact(int a)
{
	if(a>1)
	{
		return a*fact(a-1);
	}
	else
	{
		return 1;
	}
}
