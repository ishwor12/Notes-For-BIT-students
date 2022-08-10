#include<stdio.h>

int main()
{
    int first, second, third, fourth;
    printf("Enter four integers (separated by space): ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);
//smallest among 4
//https://www.programiz.com/c-programming/c-operators
     if((first<second) && (first<third) && (first<fourth))
        printf("\n %d  is smallest",first);
    else if((second<first) && (second<third) && (second<fourth))
        printf("\nSecond number is smallest");
    else if((third<second) && (third<first) && (third<fourth))
        printf("\nThird number is smallest");
    else if((fourth<second) && (fourth<third) && (fourth<first))
        printf("\nFourth number is smallest");
/*
 if((first>second) && (first>third) && (first>fourth))
        printf("\nFirst number is largest");
    else if((second>first) && (second>third) && (second>fourth))
        printf("\nSecond number is largest");
    else if((third>second) && (third>first) && (third>fourth))
        printf("\nThird number is largest");
    else if((fourth>second) && (fourth>third) && (fourth>first))
        printf("\nFourth number is largest");
*/
    return 0;
}
