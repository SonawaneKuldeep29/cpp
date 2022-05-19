#include<iostream.h>
#include<conio.h>
class arithmatic
{
  int a,b,sum,sub,mul;
  float div;
  public:
  void get();
  void put();
};
void arithmatic::get()
{
 cout<<"enter the value of a=";
 cin>>a;
 cout<<"enter the vlaue of b=";
 cin>>b;
 sum=a+b;
 sub=a-b  ;
 mul=a*b ;
 div=a/b;
}
void arithmatic::put()
{
 cout<<"---------**********----------";
 cout<<"\naddition is :-"<<sum<<endl;
 cout<<"substraction is:-"<<sub<<endl;
 cout<<"multiplication is:-"<<mul<<endl;
 cout<<"division is :-"<<div<<endl;
}
void main()
{
 clrscr();
 arithmatic a;
 a.get();
 a.put();
 getch();
}
