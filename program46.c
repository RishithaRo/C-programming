//Amicable pair of numbers
/* 
Write a program to accept any two numbers and 
find the sum of factors of first number and 
check if the factors sum of first number equal to value of 2nd number.
find the factors sum of 2nd number and check if it is equal to value of 1st num.
Now, if the factors sum of 1st num == 2nd num and 
if the factors sum of 2nd num == 1st num, print Yes. Otherwise no.
Note:-- While calculating the sum of factors of number, 
the sum should be calculated without considering that number.
*/

//method1
#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d%d",&num1,&num2);
	int sum1 = 0, sum2 = 0;
	int i;
	for(i=1;i<num1;i++) 
	{
		if(num1%i==0)  //Finding factors of num1
		{
			sum1 = sum1+i;  //adding factors of num1
		}
	}
	for(i=1;i<num2;i++)
	{
		if(num2%i==0)		//Finding factors of num2
		{
			sum2 = sum2 + i;	//adding factors of num2
		}
	}
	if ((sum1==num2) &&(sum2==num1))
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
