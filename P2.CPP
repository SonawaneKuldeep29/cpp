#include<iostream.h>
#include<conio.h>
class prime
{
  public:
  int x,i,z;
  void get();
  void display();
};
void prime::get()
{
 cout<<"enter the number:-";
 cin>>x;
 for(i=2;i<x;i++)
  {
   if(x%i==0)
   {
    z=1;
    break;
   }
   z=0;
  }
}
void prime::display()
{
  if(z==0)
 {
  cout<<"number is prime:";
 }
 else
 {
  cout<<"number is not prime:";
 }
}
void main()
{
 clrscr();
 prime p;
 p.get();
 p.display();
 getch();
}