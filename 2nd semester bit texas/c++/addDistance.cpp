// Write a program to input two distance in feet anf inch and add those distance passing the object to the function.

#include<iostream>
using namespace std;
class findDistance{
	private:
		int feet;
		int inch;
	public:
		findDistance(){
			feet=0;
			inch=0;
		}
		findDistance(int f,int i){
			feet=f;
			inch=i;
		}
		void addDistance(findDistance a, findDistance b){
			feet=a.feet+b.feet;
			inch=a.inch+b.inch;
			feet=feet+inch/12;
			inch=inch%12;
		}
		void display(){
			cout<<feet<<"feet"<<inch<<"inch";
		}
};
int main(){
	findDistance anil (1,2);
	findDistance teacher (3,4);
	findDistance add;
	add.addDistance(anil,teacher);
	add.display();
	return 0;
}
