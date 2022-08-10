//Sorting of elements in ascending order

#include<stdio.h>

void sorting();
int main()
{
	sorting();
	
	return 0;
	
}

void sorting()
{
	int num[100],i,j,temp,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1 ;j<n;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}
	
	printf("\n Printing sorted elements:");
	for(i=0;i<n;i++)
	{
		printf("%d \t",num[i]);
	}
}
