#include<stdio.h>
int main()
{
    int n,a,b,c,d,rem;
    printf("enter a five digit number :");
    scanf("%d",&n);
    a=n/10000;
    rem=n%10000;
    b=rem/1000;
    rem=rem%1000;
    c=rem/100;
    rem=rem%100;
    d=rem/10;
    rem=rem%10;
    printf("%d   ",a);
        printf("%d   ",b);
            printf("%d   ",c);
                printf("%d   ",d);
                    printf("%d   ",rem);
                    return 0;
}
