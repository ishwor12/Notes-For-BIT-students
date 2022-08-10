//WAP to find area and perimeter of any two rectangles using class defining the member
 #include<iostream>
 using namespace std;
 class rectangle
 {
 private:
int length,breadth;
 public:
 void setdata(int l, int b);
 void showdata();
 int area();
 int perimeter();
 int main()
 {
 rectangle r1;
 r1.setdata(4,3);
 r1.showdata();
 cout<<"Area of first_rectangle is "<<r1.area();cout<<("\n");
 cout<<"Perimeter of first_rectangle is "<<r1.perimeter();cout<<("\n");
 cout<<("\n");
 rectangle r2;
 r2.setdata(8,9);
 r2.showdata();
 cout<<"Area of second_rectangle is "<<r2.area();cout<<("\n");
 cout<<"Perimeter of second_rectangle is "<<r2.perimeter();cout<<("\n");

};
int rectangle::setdata ( int l, int b)

{
   length =l;breadth =b;

}
{
     int rectangle::area()
 {
 return length*breadth;
 }

 int rectangle::perimeter()
 {
 return 2*(length+breadth);
 }
return 0;
}
