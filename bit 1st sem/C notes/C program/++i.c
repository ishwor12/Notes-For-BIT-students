#include<stdio.h>
int main()
{
	int i=10,j=0;
	j=--i + i++ + ++i;
	printf("Value of i is %d, Value of j is %d",i,j);
	return 0;
}
