'#include<stdio.h>
int main()
{
   int a,b,c;
    printf("enter any three number");
    scanf("%f%f%f",&a,&b,&c);

if(a>b && a>c)
{
    printf("the greatest number is:%F",a);
}

else if (b>a && b>c)
{
    printf("the greatest number is %F ",b);
}
else
{
    printf("the greatest number is %F ",c);

}
return 0;
    }
