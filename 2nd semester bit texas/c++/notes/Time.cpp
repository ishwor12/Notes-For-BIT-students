//WAP to input two times and add those times in hour,minutes and second.
#include<iostream>
using namespace std;
class time{
	private:
		int second;
		int minute;
		int hour;
	public:
		time(int hrs, int min, int sec)
		{
			second=sec;
			minute=min;
			hour=hrs;
		}
		void period(time t1, time t2)
		{
			second=t1.second+t2.second;
			minute=t1.minute+t2.minute;
			hour=t1.hour+t2.hour;
			minute=minute+second/60;
			hour=hour+minute/60;
			second=second%60;
			minute=minute%60;
		}
		void newPeriod()
		{
			cout<<"\n"<<hour<<" Hour "<<minute<<" Minute "<<second<<" Second ";
		}
}; 

int main()
{
	time tim1(10,40,50);
	tim1.newPeriod();
	time tim2(12,45,30);
	tim2.newPeriod();
	time tim3(0,0,0);
	tim3.period(tim1, tim2);
	tim3.newPeriod();
	
	return 0;
}
