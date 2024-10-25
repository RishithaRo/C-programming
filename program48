// Write a program to accept any two integers and print them after swapping. 
//method1

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int temp;   //This method is not much efficient as memory wastage happens and also it is much slower as compared to remaining methods
	temp = a;
	a = b;
	b = temp;
	printf("%d ",a);
	printf("%d",b);
	return 0;
}

// Swap 2 numbers without using 3rd variable

//method2

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a=a+b;
	b = a-b;
	a = a-b;
	printf("%d ",a);
	printf("%d",b);
	return 0;
}

//method3

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a = a*b;
	b = a/b;
	a = a/b;
	printf("%d %d",a,b);
	return 0;
}

//method4
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("%d %d",a,b);
	return 0;
}

// Method4 using ^ xor operator is more faster than all remaining methods and also takes less time.
