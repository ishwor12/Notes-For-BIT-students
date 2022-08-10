#include<stdio.h>
#include<math.h>
int main()
{
   int x1, y1, x2, y2, x, y,distance;

   printf("Enter coordinates of first point X1: ");
   scanf("%d",&x1);
    printf("Enter coordinates of first point Y1: ");
   scanf("%d", &y1);
   printf("Enter coordinates of second point x2: ");
   scanf("%d",&x2);
    printf("Enter coordinates of second point y2: ");
   scanf("%d",&y2);
   distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
   printf("Distance = %d",distance);

   return 0;
}
