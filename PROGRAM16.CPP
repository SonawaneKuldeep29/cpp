//operator overloading without using friend function.
#include<iostream.h>
#include<conio.h>
class unary
{
 private:
 int a,b,c;
 public:
 void get();
 void operator -();
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
void unary::operator -()
{
 a=-a;
 b=-b;
 c=-c;
 cout<<"***********************************************"<<endl;
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