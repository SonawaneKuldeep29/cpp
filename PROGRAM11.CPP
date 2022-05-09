//Hierarchical Inheritances.
#include<iostream.h>
#include<conio.h>
class A
{
 protected:
 int x;
};
class B:public A
{
 protected:
 int y;
};
class C:virtual public B
{
  private:
  int z;
  public:
  void get();
  void display();
};
class D:virtual public B
{
 private:
 int p;
 public:
 void put();
 void show();
};
void C::get()
{
 cout<<"enter x:";
 cin>>x;
 cout<<"enter Y:";
 cin>>y;
 cout<<"enter z:";
 cin>>z;
}
void C::display()
{
 cout<<"value of x:"<<x<<endl;
 cout<<"value of Y:"<<y<<endl;
 cout<<"vlaue of z:"<<z<<endl;
}
void D::put()
{
 cout<<"enter x:";
 cin>>x;
 cout<<"enter y:";
 cin>>y;
 cout<<"enter p:";
 cin>>p;
}
void D::show()
{
 cout<<"value of x:"<<x<<endl;
 cout<<"value of Y:"<<y<<endl;
 cout<<"vlaue of p:"<<p<<endl;
}
class F
{
  protected:
  int q;
};
class E:public F
{
 private:
 int r;
 public:
 void input();
 void output();
};
void E::input()
{
 cout<<"enter q:";
 cin>>q;
 cout<<"enter r:";
 cin>>r;
}
void E::output()
{
 cout<<"value q:"<<q<<endl;
 cout<<"value r:"<<r;
}
void main()
{
 clrscr();
 C s;
 s.get();
 D s1;
 s1.put();
 E s2;
 s2.input();
 s.display();
 s1.show();
 s2.output();
 getch();
}
