//WAP to find diameter and circumference of a circle.
#include<iostream>
using namespace std;
int main()
{
float radius;
cout<<"Enter the radius of a circle: ";
cin>>radius;
float diameter = 2*radius;
float Circumference_of_circle = 2*3.1416*radius;
cout<<"Diameter of circle: "<<diameter<<"\n";
cout<<"Circumference of circle: "<<Circumference_of_circle;
return 0;
}
