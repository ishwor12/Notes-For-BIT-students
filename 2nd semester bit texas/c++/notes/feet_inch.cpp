//WAP to input the two distances in feet and inch and add those distances using passing the object to the function.//
#include <iostream>
using namespace std;
class length{
	private:
		int feet;
		int inch;
	public:
		length(int fet, int ich)
		{
			feet=fet;
			inch=ich;
		}
		void distance(length l1, length l2)
		{
			feet=l1.feet+l2.feet;
			inch=l1.inch+l2.inch;
			feet=feet+inch/12;
			inch=inch%12;	
		}	
		void newDistance()
		{
			cout<<"\n"<<feet<<" feet "<<inch<<" inch";
		}		
};

int main()
{
	length dis1(24,13);
	dis1.newDistance();
	length dis2(14,15);
	dis2.newDistance();
	length dis3(0,0);
	dis3.distance(dis1,dis2);
	dis3.newDistance();
	
	return 0;
}
