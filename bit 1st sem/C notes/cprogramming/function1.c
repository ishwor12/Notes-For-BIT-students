 //Example of program with no argumnents but return type to find the area of rect
#include<stdio.h>

int area();

int main()
{ 
 	int rectArea;
	rectArea=area();
	printf("Area of rectangle is %d",rectArea);
	return 0;
}

int area()
{
	int length,breadth,area;
	printf("Enter the length of rectangle:");
	scanf("%d",&length);
	printf("Enter the breadth of rectangle:");
	scanf("%d",&breadth);
	area=length*breadth;
	return area;
	
}
