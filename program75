// write a program to accept a string and print number of vowels & consonants
#include<stdio.h>
#include<string.h>
main()
{
	char str[100];
	scanf("%[^\n]s",str);
	int i;
	int vow=0,cons=0;
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
		{
			if(str[i]==97 || str[i]==101 || str[i]==105 || str[i]==111 || str[i]==117
		 		||str[i]==65 || str[i]==69 || str[i]==73 || str[i]==79 || str[i]==85 )	
			{
		 		vow++;
			}
			else
			{
				cons++;
			}
		}
	}
	printf("vow:%d cons:%d",vow,cons);
}
