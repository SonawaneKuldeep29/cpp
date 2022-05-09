//virtual function.
#include<iostream.h>
#include<conio.h>
class base
{
 public:
 void display()
 {
  cout<<"this is base class display()\n";
 }
 virtual void show()
 {
  cout<<"this is base class show()\n";
 }
};
class derived:public base
{
  void display()
 {
  cout<<"this is base class display()\n";
 }
  void show()
 {
  cout<<"this is Derived class show()\n";
 }
};
void main()
{
 clrscr();
  base *b;
  base b1;
  b=&b1;
  b->display();
  b->show();

  derived d;
  b=&d;
  b-> display();
  b->show();
 getch();
}