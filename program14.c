#include<stdio.h>
void main()
{
	int b=10,c=2;
	char a;
	printf("enter the symbol of operation to be performed...");
	scanf("%c",&a);
	if(a=='+')
	printf("addition is:%d",b+c);
	if(a=='-')
	printf("Subtraction is: %d",b-c);
	if(a=='*')
	printf("Multiplication is: %d",b*c);
	if(a=='/')
	printf("Division is: %d",b/c);
	if(a=='%')
	printf("Remainder is: %d",b%c);
}
