// Armstrong number without using pre-defined functions
#include<stdio.h>
int main()
{
	int num, sum = 0,i;
	scanf("%d",&num);
	int x = num;
	int c = 0;
	int y = num;
	while(num>0)
	{
		num = num/10;
		c++;
	}
	int r;
	int pow = 1;
	while(x>0)
	{
		r = x%10; //3
		for(i=1;i<=c;i++)  //Finding power without using pre-defined functions
		{
			pow = pow*r;//3
		}
		sum = sum + pow;
		x = x/10;
		pow = 1;
	}
	if(sum == y)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
