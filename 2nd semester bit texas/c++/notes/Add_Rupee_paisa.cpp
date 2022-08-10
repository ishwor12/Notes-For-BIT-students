#include<iostream>
//#include<string.h>

using namespace std;
class amount{
	private:
		int rupee;
		int paisa;
	public:
		amount()
		{
			rupee=0;
			paisa=0;
		}
		amount(int r, int p)
		{
			rupee=r;
			paisa=p;
		}
	void addAmount(amount a1, amount a2){
		rupee=a1.rupee+a2.rupee;
		paisa=a1.paisa+a2.paisa;
		rupee=rupee+paisa/100;
		paisa=paisa%100;
	}
	void display()
	{
	cout<<"\n"<<rupee<<"Rupees"<<paisa<<"paisa";	
		
	}	
};

int main()
{
	amount Ram(55,60);
	Ram.display();
	amount Shyam(80,60);
	Shyam.display();
	amount teacher;
	teacher.addAmount(Ram, Shyam);
	teacher.display();
}

