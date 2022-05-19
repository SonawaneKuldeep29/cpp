//  hierachical inheritance.
#include<iostream.h>
#include<conio.h>
class base
{
  int a,b,c;
  public:
  void read()
  {
   cout<<"\n------------------------------"<<endl;
   cout<<"enter the number a:-";
   cin>>a;
   cout<<"enter the number b:-";
   cin>>b;
  }
  void show()
  {
   c=a+b;
   cout<<"sum is :-"<<c;
  }
};
class derived1:public base
{

};
class derived2:public base
{

};
void main()
{
 clrscr();
 derived1 ob;
 ob.read();
 ob.show();
 derived2 ob2;
 ob2.read();
 ob2.show();
 getch();
}