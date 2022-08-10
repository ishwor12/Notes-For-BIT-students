//Example of matrix addition

#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],sum[10][10],i,j,m,n;
	printf("Enter the no. of rows:");
	scanf("%d",&m);
	printf("Enter the no. of columns:");
	scanf("%d",&n);

	//Read first input
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the value for a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	//Read Second input
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the value for b[%d][%d]:",i,j);
			scanf("%d",&b[i][j]);
		}
	}

	//Sum of matrix
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]/b[i][j];
		}
	}

	//Displaying result
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d \t",sum[i][j]);
		}
		printf("\n");
	}

	return 0;

}
