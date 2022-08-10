#include <stdio.h>
int add(int a, int b)         // function definition
{
   int result;
   result = a+b;
   return result;                  // return statement
}
int sub(int n1, int n2)         // function definition
{
   int result;
   result = n1-n2;
   return result;                  // return statement
}
int multiply(int n1, int n2)         // function definition
{
   int result;
   result = (n1*n2);
   return result;                  // return statement
}
int divide(int a, int b)         // function definition
{
 int result;
   result = (a/b);
   return result;                  // return statement
}

int main()
{
   int n1,n2,sum,diff;
   int mult,div;

   printf("Enters two numbers: ");
   scanf("%d %d",&n1,&n2);

   sum = add(n1, n2);        // function call
   printf("sum = %d",sum);

   diff = sub(n1, n2);        // function call
   printf("substarct = %d",diff);

  mult = multiply(n1,n2);        // function call
   printf("multiply = %d",mult);

   div = divide(n1, n2);        // function call
   printf("division = %d",div);

   return 0;
}

