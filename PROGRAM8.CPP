//Multilevel inheritance
#include<iostream.h>
#include<conio.h>
class student
{
 private:
 int rollno;
 char name[15];

 public:
 void get();
 void put();
};
class mark:public student
{
 private:
 int m1,m2;
 public:
 void get_mark();
 void put_mark();
};
class result:public mark
{
  private:
  int total;
  public:
  void display();
};
void student::get()
{
 cout<<"enter the roll number of the student:-";
 cin>>rollno;
 cout<<endl<<"enter the name of the sudent:-";
 cin>>name;
}
void mark::get_mark()
{
get();
cout<<"-------------------------------------------";
 cout<<"\n\nenter the marks of the student";
 cout<<"\n\n enter the first subject marks:-";
 cin>>m1;
  cout<<"\nenter the second subject marks:-";
 cin>>m2;
}
void student::put()
{
 cout<<"\n ------------------------------------------";
 cout<<"\n roll number of student is :-"<<rollno;
 cout<<"\n name of the student is :-"<<name;
}
void mark::put_mark()
{
 put();
 cout<<"\n marks of the first subject is:-"<<m1;
 cout<<"\n marks of the second subject is:-"<<m2;
}
void result::display()
{
 get_mark();
 put_mark();
/* total=m1+m2;
 cout<<"total is ="<<total<<endl;*/
}
void main()
{
 clrscr();
  result r;
  r.display();
 getch();
}