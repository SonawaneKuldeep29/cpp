#include<iostream.h>
#include<conio.h>
class addition
{
 public:
 int a,b,sum;
 void app();
 void display();
}
void addition::app()
{
 cout<<"enter the first Number";
 cin>>a;
  cout<<"enter the second Number";
 cin>>b;
}
void addition::display()
{
  sum=a+b;
  cout<<"addtion of two number is"<<sum;
}
void main()
{
 clrscr();
 addition a1;
 a1.app();
 a1.display();
 getch();
}