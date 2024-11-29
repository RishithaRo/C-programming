#include<stdio.h>
struct student 
{
	int r;
	float g;
}s1[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		scanf("%d %f",&s1[i].r,&s1[i].g);
	}
	for(i=0;i<3;i++)
	{
		printf("%d %f\n",s1[i].r,s1[i].g);
	}
}
