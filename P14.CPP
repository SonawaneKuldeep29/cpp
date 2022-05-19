//operator over loading - operator by friend functin;
#include<iostream.h>
#include<conio.h>
class unary
{
 int a,b;
 public:
 void get();
 unary friend operator -(unary &x);
 void show();
};
void unary::get()
{
 cout<<"enter value of a:";
 cin>>a;
 cout<<"enter value of b:";
 cin>>b;
}
unary operator -(unary &x)
{
 x.a=-x.a;
 x.b=-x.b;
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