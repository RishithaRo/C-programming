/*
Note:-- 
If you define the function after writing the main() function,
declaration is compulsory.
If you define the function before main() function,
No need of declaration
*/

/* Only some compilers accept without declaration. So you should compulsory declare
the function if you are defining it after main() function
*/

// Function with argument without return value

//method1

#include<stdio.h>
void add(int,int);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
void add(int a,int b)
{
	int sum = a+b;
	printf("%d",sum);
}


//method2
#include<stdio.h>
void add(int a,int b)
{
	int sum = a+b;
	printf("%d",sum);
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	add(a,b);
}
