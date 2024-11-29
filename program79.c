/*
program to accept a sring and print the most occured element of a string
i/p:-- 
welcome to terv
o/p:--
e
*/

//method1

#include<stdio.h>
int main()
{
	char str[50];
	scanf("%[^\n]s",str);
	int freq[123]={0};
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		freq[str[i]]++;
	}
	int max=0,index=0;
	for(i=0;i<123;i++)
	{
		if(freq[i]>max)
		{
			max = freq[i];
			index = i;
		}
	}
	printf("%c",index);
}







