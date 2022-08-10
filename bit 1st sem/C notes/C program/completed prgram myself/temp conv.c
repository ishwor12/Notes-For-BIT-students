#include<stdio.h>
int main()
{
float cel;
float Fer;
float kel;
printf("enter temp in cel.");
scanf("%f",&cel);
Fer=(cel*9/5)+32;
kel=(10*cel+273);
printf(" \n temp in fer :%f",Fer);
printf(" \n temp in kel :%f",kel);

return 0;
}
