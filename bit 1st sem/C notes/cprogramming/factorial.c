//Example of fibonacci series upto nth term.

#include<stdio.h>
int fibonacci(int n);

int main()
{
	int n,i;
	printf("Enter the number of terms in fibonacci series:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fibonacci(i));
	}
	return 0;
}

int fibonacci(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}

