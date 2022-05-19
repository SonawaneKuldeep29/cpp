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
  friend void add(base B);

};
void add(base B)
{
 int c;
  c=B.a+B.b;
  cout<<"sum is:-"<<c;
}
void main()
{
 clrscr();
 base b1;
 b1.read();
 add(b1);
 getch();
}