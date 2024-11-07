// write a program to count number of alphabets, numbers and others in a given string
#include<stdio.h> 
#include<string.h>
main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i,alphabets = 0,numbers = 0,others=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		{
			alphabets++;
		}
		else if(str[i]>='0'&&str[i]<='9')
		{
			numbers++;
		}
		else
		{
			others++;
		}
	}
	printf("alphabets:%d numbers:%d others:%d",alphabets,numbers,others);
}
