// Write a c program that accept an integer value n and prints the sum of only first and last digit of that integer .
// i/p:- 7567  o/p:- 14       , i/p:--768   o/p:-- 15 
#include<stdio.h>
int main()
{
	int n,i,num = 1,sum,c,dig1,dig2,ac_val;
	scanf("%d",&n);
	ac_val=n;
	while(n>0)
	{
		n=n/10;
		c++; //length
	}
	/* we can get first digit of 28 if we divide with 10,
	similarly, for 876, we divide with 100, for 8765 we divide with 1000
	for first digit. which means if 2-digit--divide with 10,
	 if 3-digit--divide with 100, if four digit divide with 1000...and so on... 
	 we can get last digit of any number by doing modulus on that number (num%10)
  */
	for(i=1;i<c;i++) 
	{
		num = num * 10;
	}
	dig1 = ac_val / num;
	dig2 = ac_val %10;
	sum = dig1 + dig2;
	printf("%d",sum);
	return 0;
}
