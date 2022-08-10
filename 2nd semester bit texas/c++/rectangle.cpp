#include<iostream>
using namespace std;
class rectangle
{private:
int length, int breadth;
public:
void setdata(int l,int b);
    {
        length=l;
        breadth=b;
    }
void showdata()
{
cout<<"Length="<<length<<"\nBreadth="<<breadth<<endl; }
int findarea()
{
    return length*breadth;}
int perimeter()
{
    return 2*(length+breadth);}
};
void main()
{
rectangle r;
r.setdata(4,2);
r.showdata();
cout<<"Area= "<<r.findarea()<<endl;
cout<<"Perimeter="<<r.perimeter();
}

};
