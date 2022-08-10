#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,choice;
    printf(" \n enter 1 for addition:");
    printf("\n enter 2 for  substraction:");
    printf("\n enter 3 for multiplication:");
    printf("\n enter 4 for diviisiion:");
    printf("\n enter 5 for squarerot");
    printf("\n enter 6 for modulus \n ");
    printf("\n enter your choice:");
    scanf("%d",&choice);
switch(choice)
{
    case 1:printf("\n enter two number  ");
    scanf(" %d%d",&a,&b);

    printf ("\n result after addtion is:%d",a+b);
    break;

     case 2:printf("enter any two number ");
    scanf("%F%f",&b);
    printf ("\n result after substraction is:%f",a-b);
break;
     case 3:printf("\n enter any two number ");
    scanf("%F%f",&a,&b);
    printf ("\nresult after multiplication is:%",a*b);
break;
     case 4:printf("\n enter any two number ");
    scanf("%F%f",&a,&b);
    printf ("\nresult after diviision is:%f",a/b);
break;
     case 5:printf("\n enter any number ");
    scanf("%F",&a);
    printf ("\nresult after addtion is:%f",sqrt(a));
break;
     case 6:printf("\n enter any two number a,b: ");
    scanf("%F%f",&a,&b);
    printf ("\n result after a modulo b is:%d",a%b);
break;
    default:printf("enter valid option to proceed");
break;
}
printf("\n******THANKK YOU*******");

    }

