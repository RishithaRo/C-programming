/* write a program that gives following output using while loop
6
11
16
21
26
31
36
41
*/
#include<stdio.h>
void main()
{
	int a=6;
	while(a<=41)
	{
		printf("%d\n",a);
		a=a+5;
	}
}
