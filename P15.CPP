#include<iostream.h>
#include<conio.h>
class binary
{
  private:
  int a,b;
  public:
  void read();
  void show();
  binary friend operator +(binary B1, binary B2);
};
void binary::read()
{
 cout<<"enter value of a:-";
 cin>>a;
 cout<<"enter value of b:-";
 cin>>b;
}
binary operator +(binary B1, binary B2)
{
  binary B3;
  B3.a=B1.a+B2.a;
  B3.b=B1.b+B2.b;
  return(B3);
}
void binary::show()
{
 cout<<"a=   "<<a<<endl;
 cout<<"b=   "<<b<<endl;
}
void main()
{
 clrscr();
  binary B1,B2,B3;
  B1.read();
  B2.read();
  B3=B1+B2;
  B3.show();
 getch();
}