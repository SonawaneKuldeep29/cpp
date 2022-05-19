//single inheritance.
#include<iostream.h>
#include<conio.h>
class A
{
 public:
 int a,b,c;
 void get()
 {
 cout<<"enter the value of a:";
 cin>>a;
 cout<<"enter the value of b:";
 cin>>b;
 c=a+b;
 }
  void put()
 {
 cout<<"addition is :-"<<c;
 }
};
class B:public A
{

};
void main()
{
 clrscr();
 B b1;
 b1.get();
 b1.put();

 getch();
}