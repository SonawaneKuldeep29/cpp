#include<iostream.h>
#include<conio.h>
class demo
{

 public:
 int a,b;
void demo::show()
{
 cout<<"enter value of a:-";
 cin>>a;
  cout<<"enter value of b:-";
 cin>>b;
 cout<<":-"<<a<<endl;
}
void demo::show(int b)
{
  cout<<":-"<<b<<endl;
}
void demo::show(int x,int y)
{
 a=x;
 b=y;
   cout<<a+b;
}
};
void main()
{
 clrscr();
 demo d1;
 d1.show();
 d1.show(5);
 d1.show(2,3);
 getch();
}