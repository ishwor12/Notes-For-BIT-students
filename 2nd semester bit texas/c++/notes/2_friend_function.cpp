#include<iostream>
using namespace std;

class teacher;
class student{
	int rupee;
	
	public:
		void input()
		{
			cout<<"Enter rupess for student:";
			cin>>rupee;
		}
		
	friend int total(student, teacher);
	 	
};

class teacher{
	int rupee;
	
	public:
		void input()
		{
			cout<<"Enter rupee for teacher:";
			cin>>rupee;
		}
	friend int total(student, teacher);	
};

int total(student s, teacher t)
{
	return s.rupee+t.rupee;
}

int main()
{
	student s1;
	s1.input();
	teacher t1;
	t1.input();
	cout<<"Total rupee:"<<total(s1,t1);
	
	return 0;
}
