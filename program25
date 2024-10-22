// program to find current bill
#include<stdio.h>
int main()
{
	int nu;
	float bill;
	printf("Enter no. of units consumed:");
	scanf("%d",&nu);
	if(nu<=50)
	{
		bill = nu*0.50;
	}
	else if(nu<=100)
	{
		bill = nu *0.75;
	}
	else if(nu<=250)
	{
		bill = nu*1.20;
	}
	else
	{
		bill = nu*1.50;
		bill += ((bill)*20/100);
	}
	printf("%f",bill);
}
