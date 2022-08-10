#include<iostream>
#include<string.h>
using namespace std;

class student{
	int roll,marks;
	char nam[20];
	
public:	
	student()
	{
		this->roll=0;
		this->marks=0;
		strcpy(this->nam,"\0");
	}
	
	student(int roll, int marks, char nam[20])
	{
		this->roll=roll;
		this->marks=marks;
		strcpy(this->nam,nam);
	}
	
	student greaterMarks(student g)
	{
		if(marks>g.marks)
		{
			return *this;
		}
		else
		{
			return g;
		}
	}
	
	void display()
	{
		cout<<"Roll:"<<roll;
		cout<<"\nMarks:"<<marks;
		cout<<"\nName:"<<nam;
	}
};

int main()
{
	student r1;
	student s2(4,70,"Ram");
	student s3(5,50,"Rohan");
	student s4(6,60,"Nimesh");
	student s5(7,75,"Bhattarai");
	r1=s2.greaterMarks(s3);
	r1=s4.greaterMarks(r1);
	r1=s5.greaterMarks(r1); 
	r1.display();
	
	return 0;
}
