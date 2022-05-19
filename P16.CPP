#include<iostream.h>
#include<conio.h>
class unary
{
 int a,b;
 public:
 void get();
 void operator -();
 void show();
};
void unary::get()
{
 cout<<"enter value of a:";
 cin>>a;
 cout<<"enter value of b:";
 cin>>b;
}
void unary::operator-()
{
 a=-a;
 b=-b;
}
void unary::show()
{
 cout<<"a=  "<<a<<endl;
 cout<<"b=  "<<b<<endl;
}
void main()
{
 clrscr();
 unary u;
 u.get();
 -u;
 u.show();

 getch();
}