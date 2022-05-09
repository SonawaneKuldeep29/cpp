//operator overloading using friend function(unary operator).
#include<iostream.h>
#include<conio.h>
class unary
{
 private:
 int a,b,c;
 public:
 void get();
 unary friend operator -(unary &x);
 void show();
};
void unary::get()
{
 cout<<"enter value of a=";
 cin>>a;
  cout<<"enter value of b=";
 cin>>b;
  cout<<"enter value of c=";
 cin>>c;
}
unary operator-(unary &x)
{
 x.a=-x.a;
 x.b=-x.b;
 x.c=-x.c;
}
void unary::show()
{
 cout<<"a=   "<<a<<endl;
 cout<<"b=   "<<b<<endl;
 cout<<"c=   "<<c<<endl;
}
main()
{
 clrscr();
  unary u;
     u.get();
     -u;
     u.show();
 getch();
}