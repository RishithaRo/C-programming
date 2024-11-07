// program to print the string in a reverse order

//method1
#include<stdio.h>
int main()
{
	char str1[100];
	scanf("%[^\n]s",str1);
	char str2[100];
	int i;
	int c = 0;
	for(i=0;str1[i]!='\0';i++)
	{
		c++;
	}
	int j=0;
	{
		for(i=c-1;i>=0;i--)
		{
		str2[j++]=str1[i];
		}
	}
	str2[c]='\0';
	printf("%s",str2);
}
*/

//method 2
#include<stdio.h>
int main()
{
	char str[100];
	scanf("%[^\n]s",str);
	//find length
	int count = 0;
	int i=0;
	while(str[i]!='\0')
	{
		count++;
		i++;
	}
	for(i=count-1;i>=0;i--)
	{
		printf("%c",str[i]);
	}
}
