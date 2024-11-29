// program to accept string and convert all uppercase letters to lower case
// program to convert all letters of a string to lowercase
#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	}
	printf("%s",str);
}
