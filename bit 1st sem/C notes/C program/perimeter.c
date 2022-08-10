#include<stdio.h>
int main()
{
    float radius,perimeter,area;
    printf("enter the value of radius");
    scanf("%f",&radius);
    perimeter=2*3.14*radius;
    area=3.14*radius*radius;
    printf("\nperimeter is %f\n",perimeter);
    printf("\narea is %f\n",area);
    return 0;
}
