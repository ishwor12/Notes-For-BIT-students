//WAP to find diameter and circumference of circle using function and passing by reference.
#include<iostream>
using namespace std;
void diameter(float &radius);
void circumference_of_circle(float &radius);
int main()
{
	float radius;
	cout<<"Enter the radius of circle: ";
	cin>>radius;
	diameter(radius);
	circumference_of_circle(radius);
	return 0;
}

void diameter(float &radius)
{
	float diameter = 2*radius;
	cout<<"Diameter of circle: "<<diameter<<"\n";
}

void circumference_of_circle(float &radius)
{
	float circumference_of_circle = 2*3.1416*radius;
	cout<<"Circumference of circle: "<<circumference_of_circle;
}
