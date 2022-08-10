//WAP to find area and perimeter of any two rectangles using class defining the member functions outside the class.
#include<iostream>
using namespace std;

class rectangle
{
	private:
		int length,breadth;
	public:
	rectangle(int l, int b)
	{
		length = l;
		breadth = b;
		cout<<"length = "<<length;cout<<("\n");
		cout<<"breadth = "<<breadth;cout<<("\n");
	}
	
		int area();
		int perimeter();
		
};


int rectangle::area()
{
	return length*breadth;
}

int rectangle::perimeter()
{
	return 2*(length+breadth);
}

int main()
{
	rectangle bc(13,14);
	cout<<"Area of first_rectangle is "<<bc.area();cout<<("\n");
	cout<<"Perimeter of first_rectangle is "<<bc.perimeter();cout<<("\n");
	cout<<("\n");
	rectangle bc0(16,17);
	cout<<"Area of second_rectangle is "<<bc0.area();cout<<("\n");
	cout<<"Perimeter of second_rectangle is "<<bc0.perimeter();cout<<("\n");
	
	return 0;
}
