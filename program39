// Write a program to accept a number and print it is Armstrong number or not
// You can use predefined functions.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,sum = 0;
	int c=0; 
/* You should intialize the count value to zero 
other wise the garbage value is existed and 
while incrementing it will get incremented
*/
	scanf("%d",&num);
	int x=num;
	int y=num;
	while(num>0)
	{
		num = num/10;
		c++;
	}
	int r,p;
	while(x>0)
	{ 				// In first iteration,
		r = x%10; //getting last digit
		p =pow(r,c);//raising power of r to its length
		sum = sum + p;
		x=x/10; //removing the last digit
	}
//checking if the sum of digits with each raised to power of num length equal to given number.
	if(sum==y) 
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}
