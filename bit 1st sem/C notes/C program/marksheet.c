#include<stdio.h>
#include<string.h>
void main()
{
   int cprog,math,english,ifa,dm,pl,bca;
   int avg;
    printf ("enter your marks in c programming");
    scanf("%d",&cprog);
    printf ("enter your marks in math");
    scanf("%d",&math);
    printf ("enter your marks in english");
    scanf("%d",&english);
    printf ("enter your marks in IFA");
    scanf("%d",&ifa);
    printf ("enter your marks in D.M.");
    scanf("%d",&dm);
    printf ("enter your marks in P.L.");
    scanf("%d",&pl);
    printf ("enter your marks in B.C.A.");
    scanf("%d",&bca);
    avg=((cprog+math+english+ifa+dm+pl+bca)/8);

    if
    {
      avg<=60
        printf("congratulation!you have got first division and %is:%f",avg);
    }
    }


    else if
    {
        avg<80
        printf("congratulation!you have got Distinction and %is:%f",avg);
    }
    else if
    {
        avg<50>59
        printf ("you have got second division and %is:%f",avg);

    }
      else if
    {
        avg<39>49
        printf("you have got Third division and %is:%f",avg);
    }
  else
    printf("you are fail and your marks is%f",avg);

}


