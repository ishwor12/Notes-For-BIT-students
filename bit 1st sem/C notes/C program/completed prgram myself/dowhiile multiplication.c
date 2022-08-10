#include<stdio.h>
void main()
{

    int n,i;
    printf("enter a number ");
    scanf("%d",&n);
    i=1;
  do
    {
        printf("%d*%d=%d \n",n,i,n*i);
        i++;
    }

        while(i<=10);


}
