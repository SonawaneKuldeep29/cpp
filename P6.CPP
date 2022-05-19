//program for demonstrate copy consstrctor.
#include<iostream.h>
#include<conio.h>
class sample
{
 private:
 int a;
 public:
 sample(int x);
 sample(sample &b);
};
sample::sample(int x)
{
 a=x;
 cout<<"a="<<a<<endl;
}
sample::sample(sample &b)
{
 a=b.a;
}
void main()
{
 clrscr();
 sample s(10);
 sample s1=s;
 getch();
}