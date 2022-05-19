//funcion overloading.
#include<iostream.h>
#include<conio.h>
class over
{
  public:
  int a,b,c,d,e;
  void get();
  void add();
  void sub();
  void mul();
};
void over::get()
{
 cout<<"enter the value of a:-";
 cin>>a;
 cout<<"enter the value of b:-";
 cin>>b;
}
void over::add()
{
 c=a+b;
 cout<<"------------------------------------"<<endl;
 cout<<"addition is:-"<<c<<endl;
}
void over::sub()
{
 d=a-b;
 cout<<"substraction is :-"<<d<<endl;
}
void over::mul()
{
 e=a*b;
 cout<<"muliplicaion is:-"<<e;
}
void main()
{
 clrscr();
 over o;
 o.get();
 o.add();
 o.sub();
 o.mul();

 getch();
}