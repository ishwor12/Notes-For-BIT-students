//Example of matrix transposition//
#include<stdio.h>
int main()
{
	int matrix[100][100],trans[100][100],i,j,m,n;
	printf("Enter the no. of rows:");
	scanf("%d",&m);
	printf("Enter the no. of columns:");
	scanf("%d",&n);
	
	//Read input
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value for matrix[%d][%d]:",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	
	//transposition
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			//ij=ji
			trans[i][j]=matrix[j][i];
		}
	}
	
	//User Data
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			//ij=ji
			printf("%d \t",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	//Display output
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			//ij=ji
			printf("%d \t",trans[i][j]);
		}
		printf("\n");
	}
}
