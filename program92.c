									// NESTED STRUCTURES
#include<stdio.h>
struct student 
{
	int rollno;
	char name[50];
};
struct marks
{
	struct student s1;
	int marks;
}m1;
int main()
{
	m1.s1.rollno = 118;
	m1.marks = 90;
	printf("%d\n",m1.s1.rollno);
	printf("%s\n",m1.s1.name);
	printf("%d\n",m1.marks);
}