#include <stdio.h>
void main() {
    int n, i, //flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i=2;i<= n/2;i++)
        {
        // condition for non-prime
        if (n%i==0)
        {
            flag=1;
            break;
        }
    }
    if (n==1)
        {
        printf("1 is neither prime nor composite.");
        }
    else {
        if (flag==0)
            printf("%d is a prime number.",n);
        else
            printf("%d is composite number.",n);
    }

}
