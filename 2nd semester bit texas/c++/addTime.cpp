//Write a program to input the two times and add those times in hour, minutes, and seconds.
#include<iostream>
using namespace std;
class time{
	private:
		int hour;
		int minute;
		int second;
	public:
	time(){
		hour=0;
		minute=0;
		second=0;
		
	}	
	time(int h, int m, int s){
		hour=h;
		minute=m;
		second=s;
	}
	void addTime(time a, time b, time c){
		hour =a.hour+b.hour+c.hour;
		hour=hour+minute/60;
		minute=a.minute+b.minute+c.minute;
		minute=minute+second/60;
		minute=minute%60;
		second=a.second+b.second+c.second;
		second=second%60;
		
		
	}
	void display(){
		cout<<hour<<"hour"<<minute<<"Minute"<<second<<"second";
		
	}
};
    int  main(){
	time a (1,20,30);
	time b (2,30,40);
	time c (3,40,40);
	time add;
	add.addTime (a,b,c);
	add.display()
	return 0;
}
