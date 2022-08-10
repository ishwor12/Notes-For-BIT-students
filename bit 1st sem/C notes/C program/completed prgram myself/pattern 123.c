#include <stdio.h>
void main ()
{

int choice,r; float area;

printf("Input 1 for area of circle\n"); printf("Input 2 for area of sphere\n"); printf("Input your choice : "); scanf("%d",&choice); switch(choice)

{

case 1:

printf("Input radius of the circle : "); scanf("%d",&r);

area=3.14*r*r;

break;

case 2:

printf("Input radius of the sphere : "); scanf("%d",&r); area=4*3.14*r*r;

break;

}

printf("The area is : %f\n",area);

}
