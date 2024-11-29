// Write a program to perform modulus of any 2 numbers
#include<stdio.h>
int main()
{
	int a,b,mod1,mod2;
	a=10;
	b=3;
	mod1=a%b; //1
	mod2= b%a; //3
	printf("%d %d",mod1,mod2);
	return 0;
}
//When perfoming modulus operation between any 2 numbers, It will return the remainder value of them.
// when we are performing modulus operation like Top_value%Bottom_value, if the top value is smallest i.e., top_value < Bottom_value, Then it don’t return remainder instead it will return The TOP_VALUE itself.
