//program to demonstrate use of function overloading.
#include<iostream.h>
#include<conio.h>

class fundemo
{
  public:
  void swap(int &,int &);
  void swap(char &, char &);
  void swap(float &, float &);
};
void fundemo::swap(int &a,int &b)
{
 int t;
 t=a;
 a=b;
 b=t;
}
void fundemo::swap(char &p, char &q)
{
 char t;
 t=p;
 p=q;
 q=t;
}
void fundemo::swap (float &m, float &n)
{
 float t;
 t=m;
 m=n;
 n=t;
}
void main()
{
 clrscr();
 fundemo f;

 int a,b;
 char p,q;
 float m,n;

 cout<<"\n\n enter two integer a and b\t";
 cin>>a>>b;
 cout<<"\n\n Before swaping a and b is :\t"<<a<<"\t"<<b;
 f.swap(a,b);
 cout<<"\n\n After swaping a and b is :\t"<<a<<"\t"<<b;

 cout<<"\n\n enter two character p and q\t";
 cin>>p>>q;
 cout<<"\n\n Before swaping p and q is :\t"<<p<<"\t"<<q;
 f.swap(p,q);
 cout<<"\n\n After swaping p and q is :\t"<<p<<"\t"<<q;

 cout<<"\n\n enter two float m and n\t";
 cin>>m>>n;
 cout<<"\n\n Before swaping m and n is :\t"<<m<<"\t"<<n;
 f.swap(a,b);
 cout<<"\n\n After swaping m and n is :\t"<<m<<"\t"<<n;
 getch();
}
