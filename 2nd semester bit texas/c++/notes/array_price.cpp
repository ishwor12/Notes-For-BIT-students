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
			cout<<"\nprice = "<<price;cout<<"\n";
		}
};

int main()
{
	int j,n;
	cout<<"Enter the value :";
	cin>>n;cout<<"\n";
	
	item i[n];
	
	for(j=0;j<n;j++)
	{
		i[j].input();
	}
	
	for(j=0;j<n;j++)
	{
		i[j].display();cout<<"\n";
	}
	return 0;
}
