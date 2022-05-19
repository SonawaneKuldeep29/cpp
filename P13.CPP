//friend class.
#include<iostream.h>
#include<conio.h>
class base
{
  int a,b;
  public:
  void read()
  {
   cout<<"enter the value of a:-";
   cin>>a;
   cout<<"enter the value of b:-";
   cin>>b;
  }
  friend class add;
};
class add
{
 int c;
 public:
 void show(base b)
 {
  c=b.a+b.b;
  cout<<"sum is:-"<<c;
  }
};
void main()
{
 clrscr();
 base b1;
 b1.read();

 add a1;
 a1.show(b1);
 getch();
}