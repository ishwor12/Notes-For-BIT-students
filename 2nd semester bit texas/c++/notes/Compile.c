#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=1;i<=100;i++)
	{
		for(j=1;j<=100;j++)
		{
			if(i%j==0)
          			    count++ ;
		}
			if(count==2)
				printf("%d\n",i);
				count=0;
	}
	return 0;
}

