// Program to check given year is leap year or not
// A leap Year comes for every 4 years. So it should be divisible by 4.
// you decide it as a leap year or not, check if it is a century year.
// A century year comes for every 100 years and it should be divisible by 100.
// If the year is a century year, It wil be a leap year for every 400 years. So it should be divisible by 400 .
// So if it is a century year, The condition is it should be divisible by 100 and 400 for telling it as a leap year
// A century year : if(year % 100 == 0 && year % 400 ==0 ) century year and leap year .
// A normal year : if(year %  4 ==0 && year % 100 != 0 ) Not a century year but leap year .
#include<stdio.h>
int main()
{
	int year;
	scanf("%d",&year);
	if(year%4 ==0 && year%100 != 0 ) // if((year%4 == 0)&& (year % 100!=0))||(year % 400 ==0)
	{								                // printf("Leap year");
		printf("Not century year..");
		printf("Leap Year...");
	}
	else if(year% 400 == 0)
	{
		printf("century year..\n");
		printf("leap year..");
	}
	else
	{
		printf("Not a leap year...");
	}
	return 0;
}
