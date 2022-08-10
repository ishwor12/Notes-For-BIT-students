#include<iostream>
#include<process.h>
#include<fstream>
#include <stdlib.h>
using namespace std;

class head
{
	char Iname[50][50];

public:
	int totalitems;
	float Qty[3];
	float price[3];
	int vatprice[3];
	int tprice[3];
	void input();
	void output();
};
class vat:public head
{
	float vats;
public:
	void vatcal();
	void outputs();
	void sum();
};

//******************************************************************
//	    INPUT FUNCTION
//******************************************************************

void head::input()
{
	system("CLS");
	cout<<"\nEnter The total number of items purchased ";
	cin>>totalitems;

	for(int i=0; i<totalitems; i++)
	{
		cout<<"\nEnter the name of each items purchased "<<i+1<<": ";
		cin>>Iname[i];
		cout<<"Enter the quantity: ";
		cin>>Qty[i];
		cout<<"Enter price of each item "<<i+1<<": ";
		cin>>price[i];
		tprice[i]=Qty[i]*price[i];
	}
}

//******************************************************************
//	   OUTPUT FUNCTION
//******************************************************************



void head::output()
{
	int a;

	ifstream infile("data.TXT");
	infile>>a;

	ofstream outfile("data.TXT");
	a+=1;
	outfile<<a;
	outfile.close();

	{ofstream outfile("abc.TXT", ios::app);
	outfile<<endl<<"Bill No.: "<<a<<endl;
	outfile<<"------------------------------------------------------------------------"<<endl;
cout<<"\n";
	cout<<"Name of Item\tQuantity   Price  Total Price Total vat\n";
	for(int i=0;i<totalitems;i++)
	{
		outfile<<"Name: "<<Iname[i]<<" Qty: "<<Qty[i]<<" Price: "<<tprice[i]<<"vat:"<<vatprice[i]<< endl;
		cout<<Iname[i]<<"\t\t"<<Qty[i]<<"\t   "<<price[i]<<"\t   "<<tprice[i]<< '\n';
	}

	outfile<<"------------------------------------------------------------------------"<<endl;
	outfile.close();
	}
}


//******************************************************************
//	   VAT CALCULATION
//******************************************************************

void vat::vatcal()
{
	input();
	for(int i=0;i<totalitems;i++)
	{
			vatprice[i]=tprice[i]+(0.13*tprice[i]);

	}
}
//******************************************************************
//	    VAT OUTPUTS
//******************************************************************

void vat::outputs()
{
	output();

	float cash=0,sum=0,qty=0,sumt=0;

	for(int i=0;i<totalitems;i++)
	{
	       sumt+=tprice[i];
		   sum+=vatprice[i];
		   qty+=Qty[i];
	}
	cout<<"\nTotal:";
	cout<<"\n------------------------------------------------------------------------------";
	cout<<"\n\tQuantity= "<<qty<<"\t\t Sum= "<<sumt<<"\tWith Vat:"<<sum;
	cout<<"\n------------------------------------------------------------------------------";

pay:

	cout<<"\n\n\t\t\t****PAYMENT SUMMARY****\n";
	cout<<"\n\t\t\tTotal cash given by buyer: ";
	cin>>cash;

	if(cash>=sum)
		cout<<"\n\t\t\tRemaining cash to be paid to customer : "<<cash-sum<<'\n';

	else
	{	cout<<"\n\t\t\tCash given is less than total amount!!!";

	goto pay;
	}
}


//    	THE MAIN FUNCTION OF PROGRAM
//****************************************************************


int main()
{
	vat obj;
	char opt, ch;
	int a=1;
	ifstream fin;




	 do{
start:
	system("PAUSE");
	system("CLS");
	cout<<"\n\n\t\t\t------------------------------";
	cout<<"\n\t\t\t Billing Management System";
	cout<<"\n\t\t\t------------------------------";
	 cout<<"\n\n\t\t\t ENTER YOUR CHOICE TO BEGIN";
	 cout<<"\n\t\t\t1.\t For New Entry\n\t\t\t2.\tTo view previous entries\n\t\t\t3.\tExit\n";
	 cout<<"\n\nEnter your option: ";
	 cin>>opt;
	 switch(opt)
	 {
	 case'1':
		 obj.vatcal();

		 obj.outputs();
		 goto start;
	 case'2':

		 fin.open("abc.TXT", ios::in);
		 while(fin.get(ch))
		 {
			 cout<<ch;
		 }
		 fin.close();

		 goto start;
	 case'3':
		 exit(0);
	 default:
		 cout<<"\a";
	 }

	 }while(opt!=3);

}
