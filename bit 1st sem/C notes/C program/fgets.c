#include<stdio.h>
void main()
{


char name[20],address[10], gender[5], nationality[10];
int age;

printf ("enter your Name:");
printf("enter your address:");
printf("enter your Gender:");
printf("enter your Nationality:");
printf("enter your age:");
fgets(name,sizeof(name),stdin);
printf("  Name is :");
puts(name);
fgets(address,sizeof(address),stdin);
printf(" your address:");
puts(address);
fgets(nationality,sizeof(gender),stdin);
printf(" your gender is :");
puts(gender);
fgets(gender,sizeof(nationality),stdin);
printf("nationality is:");
puts(nationality);
printf("age is :%f",age);
scanf ("%d",&age)

}





