#include<iostream>
using namespace std;
class rectangle
{
private:
    int length,breadth;
public:
    int set data(int l, int b);
    void show data();
    int area();
    int peri();
};
int main()
{
    rectangle r;
    r.set data(6,3);
    r.show data();
    cout <<"/n area="<< r.area();
    cout <<"/n perimeter="<< r.peri();
}
void rectangle :: set data(int l, int b)
{

    length=l;breadth=b;
{
   int rectangle::area()
 {
 return length*breadth;
 }
int rectangle::perimeter()
{
 return 2*(length+breadth);
}
