#include<iostream>
using namespace std;

class scienceMark;
class mathMark;
class englishMark{
	int eng;
	
	public:
		void input()
		{
			cout<<"Enter marks of English:";
			cin>>eng;	
		}
	friend int total(englishMark,scienceMark,mathMark);	
};

class scienceMark{
	int sci;
	
	public:
		void input()
		{
			cout<<"Enter marks of Science:";
			cin>>sci;
		}
	friend int total(englishMark, scienceMark, mathMark);	
};

class mathMark{
	int maths;
	
	public:
		void input()
		{
			cout<<"Enter mark in Math:";
			cin>>maths;
		}
	friend int total(englishMark, scienceMark, mathMark);	
};

int total(englishMark e, scienceMark s, mathMark m)
{
	return e.eng+s.sci+m.maths;
}

int main()
{
	englishMark e1;
	e1.input();
	scienceMark s1;
	s1.input();
	mathMark m1;
	m1.input();
	
	cout<<"Total marks of English, Science and Math:"<<total(e1,s1,m1);
	
	return 0;
}
