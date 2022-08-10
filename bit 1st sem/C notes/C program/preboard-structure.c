/*Define a structure Employee having data members name,address and salary.
Take data for n employee in an array dynamically and find the average salary. */

#include<stdio.h>
#define n 3
void main()
{
    struct employee
    {
        char name[30];
        char address[30];
        float salary;
    } s[n];

    int i;
    float avgSalary,sum=0;

    //Loop to read data for n employee
    for(i=0;i<n;i++)
    {
        printf("\nEnter details of employee %d\n",i+1);
        printf("Enter name:");
        fgets(s[i].name,30,stdin);
        printf("Enter salary:");
        scanf("%f",&s[i].salary);
        fflush(stdin);
        printf("Enter address:");
        fgets(s[i].address,30,stdin);
    }
    //Loop to find the sum of salary of all employees
    for(i=0;i<n;i++)
    {
        sum=sum+s[i].salary;
    }
    avgSalary=sum/n;
    printf("Average salary of employee: %f",avgSalary);
}

