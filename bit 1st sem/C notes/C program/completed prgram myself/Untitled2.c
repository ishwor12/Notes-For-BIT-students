#include<stdio.h>
void main()
{
	int num[3],i,j,temp;
	for(i=0;i<3;i++)
	{
		printf("enter %d th number",i+1);
		scanf("%d",&num[i]);
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(num[i]>num[j])
			{
				temp=num[i];
				num[i]=num[j];
				num[j]=temp;
			}
		}
	}

	printf("the median number is %d",num[1]);
}
