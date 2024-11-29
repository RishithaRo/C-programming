// There are 72 berths in a train with 8 splitting from each other.
/*
1,9,17,25,33,41,49,57,65-lower    4-lower	   7- side lower
2,10,18,34,42,50,58,66-middle	5-middle	8-side  upper
3-upper		6- upper	
If you enter the berth_no, you should get what it is like lower, middle etc...
*/
#include<stdio.h>
int main()
{
	int ber_no;
	scanf("%d",&ber_no);
	if(ber_no%8==0)
	{
		printf("Side Upper");
	}
	else if((ber_no%8==1)|| (ber_no%8==4))
	{
		printf("Lower");
	}
	else if((ber_no%8==2)||(ber_no%8==5))
	{
		printf("Middle");
	}
	else if((ber_no%8==3)||(ber_no%8==6))
	{
		printf("Upper");
	}
	else if(ber_no%8==7)
	{
		printf("Side Lower");
	}
}
