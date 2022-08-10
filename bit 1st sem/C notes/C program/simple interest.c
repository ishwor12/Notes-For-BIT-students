#include<stdio.h>
int main()
{
    float t,r,p;
    float interest;
    printf("enter the value for time,rate and principle amount:");
    scanf ("%f%f%f",&t,&r,&p);
    interest=(p*t*r)/100.0;
    printf ("principle amount  is%f",interest);
    return 0;

}
