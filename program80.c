/* program to accept a char and 
tell the number of times that character is
present in inputted string
*/

//method1
#include<stdio.h>
int main()
{
	char str[50];
	scanf("%[^\n]s",str);
	scanf("%c",&newv);
	char ch,newv;
	scanf("%c",&ch);
	int i;
	int count = 0;
	for(i=0;str[i] !='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	printf("%d",count);
}

//method2

#include<stdio.h>
int main()
{
	char str[50];
	scanf("%[^\n]s",str);
	while(getchar()!='\n');
	char ch;
	scanf("%c",&ch);
	int i;
	int count = 0;
	for(i=0;str[i] !='\0';i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	printf("%d",count);
}


//method3
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	scanf("%s\n",str);  //here,characters after space not considered into string
	char ch;
	scanf("%c",&ch);
	int len = strlen(str);
	int count=0;
	int i;
	for(i=0;i<len;i++)
	{
		if(str[i]==ch)
		{
			count++;
		}
	}
	printf("%d",count);
	
}
