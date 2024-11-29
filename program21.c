#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any 2 values:");
	scanf("%d%d",&a,&b);
	printf("Enter your option for c:");
	scanf("%d",&c);
	if(c==1)
	{
		printf("%d",a+b);
	}
	else if(c==2)
	{
		if(a>b)
		{
		printf("%d",a-b);
		}
		else
		{
			printf("%d",b-a);
		}
	}
	else if(c==3)
	{
		printf("%d",a*b);
	}
	else if(c==4)
	{
		printf("%d",a/b);
	}
	return 0;
}
