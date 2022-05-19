//multi-level inheritance.
#include<iostream.h>
#include<conio.h>
class base
{
 public:
 int a,b,c;
  void read()
 {
  cout<<"enter value of a:-";
  cin>>a;
  cout<<"enter value of b:-";
  cin>>b;
 }
};
class derived1:public base
{
 public:
 void display()
 {
 c=a+b;
 cout<<"addition is :-"<<c;
 }
};
class derived2:public derived1
{

};
void main()
{
 clrscr();
 derived2 d1;
 d1.read();
 d1.display();
 getch();
}