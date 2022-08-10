//Overloading the unary operator of ++(Friend Function with postincrement)//
#include<iostream>
using namespace std;

class Amount{
	int rupee,paisa;
	
	public:
		Amount(int r, int p)
		{
			rupee = r;
			paisa = p;
		}
		
	/*	void operator ++(int) //change//
		{
			++rupee;
			++paisa;
		}  */
		
		void display()
		{
			cout<<"Rupee:"<<rupee;
			cout<<"Paisa:"<<paisa;
		}
		
		friend void operator ++(Amount &a,int);//change//
};

void operator ++(Amount &a,int)//change//
{
	a.rupee++;
	a.paisa++;
}

int main()
{
	Amount ram(40,20);
	ram.display();
	cout<<"\n";
	ram++; //change//
	ram.display();
}
