#include<iostream>
using namespace std;

class item
{
	int code,price;
	
	public:
		void input()
		{
			cout<<"Enter code :";
			cin>>code;
			cout<<"Enter price :";
			cin>>price;cout<<"\n";
		}
		
		void display()
		{
			cout<<"code = "<<code;
			cout<<"\nprice = "<<price;
		}
};

int main()
{
	item i;
	i.input();
	i.display();
	
	return 0;
}
