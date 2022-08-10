#include<iostream>
#include<string.h>
using namespace std;

class student{
	int id;
	char name[100];
	static int count;
	
	public:
		student(int i, char n[])
		{
			id = i;
			strcpy(name,n);
			count++;
		}
		
		static void displayCount()
		{
			cout<<"\n Number of Records till now:"<<count;
		}
};
int student::count; //value declaraation.

int main()
{
	student s1(1213, "Nimesh");
	student::displayCount();
	student s2(1312,"Rohan");
	student::displayCount();
	student s3(1415,"Ram");
	s3.displayCount();
	
	cout<<"\n";
	student s4(1213, "Nimesh");
	s4.displayCount();
	student s5(1312,"Rohan");
	s5.displayCount();
	student s6(1415,"Ram");
	s6.displayCount();
	
	return 0;
}
