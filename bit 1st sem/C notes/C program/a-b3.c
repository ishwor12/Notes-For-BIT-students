#include <stdio.h>
#include <math.h>

int main()
{




  //variables
 long int a, b,x1,x2,x3,x4;
 float  x;

  //user input
  printf("Enter value of a: ");
  scanf("%f", &a);
  printf("Enter value of b: ");
  scanf("%f", &b);
  //compute
  x1 = (a * a* a);
  x2=3*(a * a)*b;
  x3= 3*a*(b*b);
  x4=(b*b*b);
 // x=(a(pow(3))-3*a(pow(2)*b)+3*a*b(pow(2))+b(pow(3));
//   x=((a*a*a) + (b*b*b) + 3(*a*a*b) + 3(*a*b*b));
  //output
  printf("Result = %f \n", x1+x2+x3+x4);
  return 0;
}
