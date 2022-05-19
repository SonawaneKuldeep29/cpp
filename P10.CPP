//hybrid inheritance.
#include<iostream.h>
#include<conio.h>
class base
{
  int a;
  public:
  void read()
  {
   cout<<"\n---------------------------"<<endl;
   cout<<"\nenter the value:-";
   cin>>a;
  }
  void show()
  {
   cout<<"the value of a is:-"<<a;
  }
};
class derived1:virtual public base
{

};
class derived2:virtual public base
{

};
class derived3:public derived1,public derived2
{

};
void main()
{
  clrscr();
    base b;
    b.read();
    b.show();

    derived1 ob;
    ob.read();
    ob.show();

    derived2 ob2;
    ob2.read();
    ob2.show();

    derived3 ob3;
    ob3.read();
    ob3.show();

  getch();
}