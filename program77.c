// program to accept a string and convert all lowercase letters of string to uppercase
// program to convert all letters of a string to uppercase
#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}
