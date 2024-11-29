// write a program to accept a number and print the first and last digit of that number after swapping them with each other.

// method 1
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int last = num%10;
	int fir=0;
	while(num>0)
	{
		fir=num;
		num = num/10;
	}
	fir= fir^last;
	last = fir^last;
	fir = fir^last;
	printf("%d ",fir);
	printf("%d",last);
	return 0;
}

//method 2
#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int a = num;
	int last = num%10;
	int c= 0;
	int pow = 1; 
	while(num>0) //Finding length
	{
		num=num/10;
		c++;
	}
/* Finding which num to get divided acc to len of num. if num is 2 digit divide with 10,
 3 digit divide with 100, 4 digit divide with 1000 etc.. to get first digit
 */	
 	int i;
	for(i=1;i<c;i++) 
	{
		pow = pow * 10;
	}
	int fir = a/pow;
	fir = fir^last;
	last = fir^last;
	fir = fir^last;
	printf("%d ",fir);
	printf("%d",last);
	return 0;
}

//method 3
#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int x = num;
	int last = num%10;
	int c = 0;
	while(num>0)
	{
		num = num/10;
		c++;
	}
	int power = pow(10,c-1); // got the value with which num to be divided to get first digit
/* Here, we cannot use c-- (post decrement)
 because it is used in fuction so that it should be 
 again assigned to c like c-=1. instead we can use --c or c-1 or c-=1
 */
	int fir;
	fir = x / power;
	fir = fir ^ last;
	last = fir^last;
	fir = fir^last;
	printf("%d",fir);
	printf("%d",last);
	return 0;
}
