#include<stdio.h>
void main()
{
   int i,j,row;
    printf("enter the no of row \t");
    scanf("%d",&row);
    for (i=1; i<=row; i++)
    {
        for (j=1; j<=i; j++)
    {
        printf("%d ",j);
         // printf("* ");

    }
        printf("\n");
}
}
