#include<stdio.h>
void originalN();
int main()
{
    originalN();
    return 0;
    }
   void originalN()
{
    int originalN,n,reversedN =0,remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;

     while (n != 0)
        {
     remainder = n % 10;
     reversedN = reversedN * 10 + remainder;
      n /= 10;
   }

     if (originalN == reversedN)
    printf("%d is a palindrome.", originalN);
   else
     printf("%d is not a palindrome.", originalN);

	}
	//https://youtu.be/Dt9q3qiaqiA ---video link similar.

