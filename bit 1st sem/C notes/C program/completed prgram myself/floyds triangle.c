#include<stdio.h>
void main()
{
   int i,j,row,number=1;
    printf("enter the no of row \t");
    scanf("%d",&row);
    for (i=1; i<=row; i++)
    {
        for (j=1; j<=i; j++)
    {
        printf("%d ",number);
         // printf("* ");
         number++;
    }
        printf("\n");
}
}
