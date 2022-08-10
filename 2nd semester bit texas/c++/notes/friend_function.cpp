//friend function
#include<iostream>
using namespace std;

class marks{
	int eng,science,math;
	
	public:
		void input()
		{
			cout<<"Enter the marks in English, Science and Math:";
			cin>>eng>>science>>math;
		}
		
		friend int total(marks);//class as arguement
};

//int sum(int,int);
int total(marks m)
{
	return m.eng+m.science+m.math;
}

int main()
{
	marks m1;
	m1.input();
	cout<<"Total marks is:"<<total(m1);
	
	return 0;
}
