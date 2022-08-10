#include<iostream>
using namespace std;
class item{
private:
int code;
int price;
public:
    void input ()
    {

        cout<<"enter the code ";cin>>code;
        cout<<"enter the price ";cin>>price;
    }
    void output()
    {
    cout<<" code= "<<code;
    cout<<" price= "<<price;
    }

};
int main(){
item i[100];
int n=0;
char choice ;
do{
cout<<"\n first item details";
i[n].input();
n++;
cout<<"\n add another item details?{y/n}";
cin >>choice;
}while(choice=='y');
cout<<"\n *****STORE ITEMS******";
for(int j =0;j<n;j++)
{

    i[j].output();

}
}
