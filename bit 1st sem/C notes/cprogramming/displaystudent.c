//Example 2:Create a structure namedstudent that has name,roll,marks and remarks as members.
//Assume appropritae types and sizes of members. use this structure to read and display records
//of N students.

#include<stdio.h>
#define n 2
int main()
{
	struct student
	{
		char name[30];
		int rollno;
		float marks;
		char remarks[100];
	}s[n];
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter the information for student %d\n",i+1);
		printf("Enter the name:");
		fflush(stdin);
		
	}
}
