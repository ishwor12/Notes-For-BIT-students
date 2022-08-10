//Example of passing array as an argument to sort an array.

#include<stdio.h>

void sorting(int num[],int n);

int main()
{
	int num[100],n,i;
	printf("Enter the no. of array elements:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter the value for num[%d]:",i);
		scanf("%d",&num[i]);
	}
	
	sorting(num,n);
	return 0;
	
	
}

void sorting(int num[],int n)
{
	int i,j,tmp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				tmp=num[i];
				num[i]=num[j];
				num[j]=tmp;
			}
		}
	}
	
	printf("\nSorted array:");
	for(i=0;i<n;i++)
	{
		printf("%d \t",num[i]);
	}
}




