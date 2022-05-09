//program to demonstrate use constructors overloading
#include<iostream.h>
#include<conio.h>
class demo
{
 private:
 int x;
 public:
 demo()
 {
  cout<<"\n constructor with no parameter:";
 }
 demo(int a)
 {
  x=a;
  cout<<"\n constructor with one parameter"<<x;
  cout<<"\n square of a="<<x*x;
 };
  demo(int a, int b)
 {
  cout<<"\n constructor with two parameter"<<a<<""<<b;
  cout<<"\n square of a+b="<<a+b;
 };
 demo(demo &d)
 {
  cout<<"\n copy constructor";
  x=d.x;
  cout<<"\n copied value="<<x;
 };
};
void main()
{
 clrscr();
 demo d1;
 demo d2(10);
 demo d3(20,30);
 demo d4(d2);
 getch();
}

