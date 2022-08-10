#include<stdio.h>

int main ()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float avg = sum / 3.0;
    printf("Sum = %d, Average = %f", sum, avg);
    return 0;
}
