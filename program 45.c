/* write a program to accept a number and then do square of a number
 and then add the digits of squared number,
 if sum of digits of squared number == given number, Then print yes. Otherwise No
 */
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int sqr;
	sqr = num*num;
	int sum = 0;
	while(sqr>0)
	{
		int dig = sqr%10;
		sum = sum + dig;
		sqr = sqr/10;
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
