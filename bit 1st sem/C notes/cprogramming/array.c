//Example of 2-D array to take input and display it.

#include<stdio.h>
int city=2;
int week=7;
int main()
{
	int temp[city][week],i,j;
	
	//Reading input
	for(i=0;i<city;i++)
	{
		for(j=0;j<week;j++)
		{
			printf("Enter temperature of city %d for day %d:",i,j);
			scanf("%d",&temp[i][j]);
		}
		
	}
	
	//Displaying output
	for(i=0;i<city;i++)
	{
		for(j=0;j<week;j++)
		{
			printf("Temperature of city %d for day %d is:%d\n",i,j,temp[i][j]);
				
		}
        printf("\n");
	}
	return 0;
}
