//operator overloading without using frined functin (Binary operator+Plus).
#include<iostream.h>
#include<conio.h>
class binary
{
 private:
 int a,b;
 public:
 void get();
 binary operator +(binary &B);
 void show();
};
void binary::get()
{
 cout<<"enter value of a=";
 cin>>a;
  cout<<"enter value of b=";
 cin>>b;
}
binary binary::operator +(binary &B)
{
 binary B3;
 B3.a=a+B.a;
 B3.b=b+B.b;
 return(B3);
}
void binary::show()
{
 cout<<"************************************";
 cout<<"\nAddition of two objects is: "<<endl;
 cout<<"a=   "<<a<<endl;
 cout<<"b=   "<<b<<endl;
  cout<<"************************************";
}
main()
{
 clrscr();
  binary B1,B2,B3;
  B1.get();
  B2.get();
     B3=B1+B2;
  B3.show();
 getch();
}