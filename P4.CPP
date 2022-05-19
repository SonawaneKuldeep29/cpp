//program to demostrate constructor and destructor
#include<iostream.h>
#include<conio.h>
class demo
{
  public:
  demo();
  ~demo();
};
demo::demo()
{
 cout<<"default constructor called"<<endl;
}
demo::~demo()
{
 cout<<"destrutor called"<<endl;
}
main()
{
 clrscr();
   demo d;
 getch();
}