#include<stdio.h>
void reverse();

int main()
{
    reverse();
    return 0;
}
void reverse()
{
    int rem,n,reverse=0;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n != 0)
        {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed number = %d", reverse);

}




