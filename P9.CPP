//Multiple Inheritance.
#include<iostream.h>
#include<conio.h>
class base
{
 public:
 int a,b,c;
 void read()
 {
 cout<<"\n for adiition"<<endl;
  cout<<"\nenter the value of a:-";
  cin>>a;
  cout<<"\nenter the vlaue of b:-";
  cin>>b;
 }
 void show()
 {
  c=a+b;
  cout<<"\naddition is:-"<<c<<endl;
  cout<<"-------------------------------------------------";
 }
};
class base2
{
 public:
 int a,b,c;

 void read1()
 {
  cout<<"\nfor substraction"<<endl;
  cout<<"\nenter the value of a:-";
  cin>>a;
  cout<<"\nenter the vlaue of b:-";
  cin>>b;
 }
 void show1()
 {
  c=a-b;
  cout<<"\nSUB is:-"<<c<<endl;
  cout<<"------------------------------------------";
 }
};
class derived:public base,public base2
{
 public:
 int a,b,c;
 void read2()
 {
  cout<<"\n for Multiplication";
  cout<<"\nenter the value of a:-";
  cin>>a;
  cout<<"\nenter the vlaue of b:-";
  cin>>b;
 }
 void show2()
 {
  c=a*b;
  cout<<"\n mul is:-"<<c<<endl;
  cout<<"---------------------------------------------"<<endl;
 }
};
void main()
{
 clrscr();
 derived d;
 d.read();
 d.show();

 d.read1();
 d.show1();

 d.read2();
 d.show2();
 getch();
}