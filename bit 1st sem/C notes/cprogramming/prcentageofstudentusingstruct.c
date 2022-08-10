#include<stdio.h>
#define n 3
void main()
{
	struct student
	{
		long int symbol;
		char name[30];
		float percentage;
	}s[n];
	
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n Enter the details of students %d\n",i+1);
		printf("Enter the symbol number:");
		scanf("%li",&s[i].symbol);
		printf("Enter name:");
		fflush(stdin);
		fgets(s[i].name,30,stdin);
		printf("Enter the percentage:");
		scanf("%f",&s[i].percentage);
	}
	printf("\n Displaying Distinction holder students: ");
	printf("\n........................................\n");
	printf("Symbol no\tName\tpercentage\n");
	for(i=0;i<n;i++)
	{
		if(s[i].percentage>=80)
		printf("%li\t\t%s\t%f\n",s[i].symbol,s[i].name,s[i].percentage);
	}
}
