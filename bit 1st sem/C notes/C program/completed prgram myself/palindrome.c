#include<stdio.h>
void main()
{
    int n,originalN,reverseN=0,rem;
    printf("enter a number");
    scanf("%d",&n);
    originalN=n;
    while(n!=0)
{
    rem=n%10;
    reverseN=reverseN*10+rem;
    n=n/10;
}
if (reverseN==originalN)
    printf("palindrome!");
else
    printf("not a palindrome number ");

}
