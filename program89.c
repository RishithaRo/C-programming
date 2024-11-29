									//STRUCTURE
/* A structure is a user-defined data type in c language.
In arrays, we can store only values of same datatype.
To overcome that dis advantage in arrays,structures can be used.								
int a = 5; means we are creating a variable a which can hold any one integer value.
struct student
{
int rollno;
char name[50];
float cgpa;
};
struct student s1; means we are creating a variable s1 of struct student datatype which can hold
an integervalue, a name and also a float value under student.
*/
#include<stdio.h>
int main()
{
	struct student
	{
		int rollno;
		char name[50];
		float cgpa;
	};
	struct student s1 = {16,"Rishitha",9.43};
	printf("%d %s %f",s1.rollno,s1.name,s1.cgpa);
}
