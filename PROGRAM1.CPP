// program for demonstrate encapsulation using class.
#include<iostream.h>
#include<conio.h>
class stud
{
 private:
 int m1,m2,rollno,total;
 float avg;
 char name[20];

 public:
 void get();
 void put();
};
void stud::get()
{
 cout<<"\n enter roll number:";
 cin>>rollno;
 cout<<"\n enter name:";
 cin>>name;
 cout<<"\n enter marks in sunject1:";
 cin>>m1;
 cout<<"\n enter marks in sunject2:";
 cin>>m2;
}
void stud::put()
{
  total=0;
  total=m1+m2;
  avg=total/2;
  cout<<"\n";
  cout<<"\n output is: ";
  cout<<"\n roll number=>\t ";
  cout<<rollno;
  cout<<"\n name =>  \t ";
  cout<<name ;
  cout<<"\n marks is subject1=>  \t";
  cout<<m1;
  cout<<"\n marks is subject2=>  \t";
  cout<<m2;
  cout<<"\n total marks=> \t";
  cout<<total;
  cout<<"\n average =>    \t";
  cout<<avg;
}
void main()
{
 clrscr();
 stud s;
 s.get();
 s.put();
 getch();
}