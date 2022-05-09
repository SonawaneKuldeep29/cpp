//addition of two number by virtual function.
#include<iostream.h>
#include<conio.h>
class base
{
 public:

  virtual void print()
  {
   int a,b;
   cout<<"enter the first num:-";
   cin>>a;
   cout<<"enter the second num:-";
   cin>>b;
  }
};
class derived:public base
{
 void print()
 {
  int a,b,c;
  c=a+b;
  cout<<"----------*************----------";
  cout<<"\naddition of two number is :-"<<c<<endl;
 }
};
void main()
{
 clrscr();
 base *b;
 base b1;
 b=&b1;
 b->print();
 derived d;
 b=&d;
 b->print();
 getch();
}