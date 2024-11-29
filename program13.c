#include<stdio.h>
void main()
{
	int INDIA;
	printf("enter the score of india..");
	scanf("%d",&INDIA);
	if(INDIA>300)
		printf("INDIA WON...");
	else if(INDIA>250)
		printf("Almost win..");
	else
	printf("INDIA lost...");
}
