//Example of matrix multiplication

#include<stdio.h>
int main()
{
	int first[10][10],second[10][10],result[10][10],i,j,k,m,n,p,q,sum=0;
	printf("Enter the rows and columns of first matrix:");
	scanf("%d%d",&m,&n);
	printf("Enter the rows and columns of second matrix:");
	scanf("%d%d",&p,&q);
	
	if(n!=p)
	{
		printf("Matrix multiplication is not possible!");
		exit(1);
	}
	
	//Read data for first matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value for first[%d][%d]:",i,j);
			scanf("%d",&first[i][j]);
		}
	}
	
	//Read data for second matrix
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("Enter value for second[%d][%d]:",i,j);
			scanf("%d",&second[i][j]);
		}
	}
	
	//matrix multiplication
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<n;k++)
			{
				sum=sum+first[i][k]*second[k][j];
			}
			result[i][j]=sum;
			sum=0;
		}
	}
	
	//Displaying result
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			//ij=ji
			printf("%d \t",result[i][j]);
		}
		printf("\n");
	}
	
	
}
