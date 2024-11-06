//strcpy
// built in method

#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%[^\n]",str);
	char str1[50];
	strcpy(str1,str);
	printf("%s",str1);
	return 0;
}

//Manual
#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	scanf("%[^\n]s",str);
	int x = strlen(str);
	char str1[x];
	int i;
	for(i=0;i<x;i++)
	{
		str1[i]=str[i];
	}
	printf("%s",str1);
}
