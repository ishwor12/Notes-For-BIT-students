#include<stdio.h>
void main()
{
char name[20],emailadd[30], gender[5], nationality[10];
int phno;

printf("enter your Name:");
fgets(name,sizeof(name),stdin);
printf("Name is :");
puts(name);

printf("enter your email:");
fgets(emailadd,sizeof(emailadd),stdin);
printf(" your email is:");
puts(emailadd);

printf("enter your Gender:");
fgets(gender,sizeof(gender),stdin);
printf(" your gender is :");
puts(gender);

printf("enter nationality :");
fgets(nationality,sizeof(nationality),stdin);
printf("nationality is:");
puts(nationality);

printf("enter your phone number");
scanf("%Fd",&phno);
printf("phone number is :%Fd",phno);

}
