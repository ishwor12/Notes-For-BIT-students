#include<stdio.h>
#include<stdlib.h>

int main()
{
	struct employee
	{
		char name[100], address[100];
		float salary;
	} *employee;
	
	int n,i;
	float sum=0,avg_sale;
	
	printf("Enter the number of employee: ");
	scanf("%d",&n);
	printf("\n");
	employee = (struct employee*) malloc(n * sizeof(struct employee));
	
	for(i=1;i<=n;i++)
	{
		printf("Enter the record of employee: %d \n",i);
		fflush(stdin);
		printf("Enter the name of employee: ");
		fgets((employee+i)->name,100,stdin);
		printf("Enter the salary: ");
		scanf("%f",&(employee+i)->salary);
		fflush(stdin);
		printf("Enter the address: ");
		fgets((employee+i)->address,100,stdin);
		sum = sum + ((employee+i)->salary);
		printf("\n");
	
	}
	
	for(i=1;i<=n;i++)
	{
		printf("Detail of employee:%d\n",i);
		printf("Name: %s", ((employee+i)->name));
		printf("Address: %s",((employee+i)->address));
		printf("Salary: %f \n",((employee+i)->salary));
		printf("\n");
		
	}
	
	avg_sale = sum/n;
	printf("Average salary is %f",avg_sale);
	
	return 0;
}
