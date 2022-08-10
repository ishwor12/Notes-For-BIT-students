//Program to read 5 numbers and print their sum

#include<stdio.h>
int main()
{
	int num[5],i,sum=0;
	for(i=0;i<5;i++)
	{
		printf("Enter %d number:",i+1);
		scanf("%d",&num[i]);
		sum=sum+num[i];
	}
	

	
	printf("Total Sum is: %d",sum);
	return 0;
}
