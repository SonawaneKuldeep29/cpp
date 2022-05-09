//single inheritance.
#include<iostream.h>
#include<conio.h>
class student
{
 private:
 int rollno;
 char name[15];

 public:
 void getinfo();
 void show();
};
class mark:public student
{
 private:
 int m1,m2,m3;
 public:
 void getdata();
 void display();
};
void student::getinfo()
{
 cout<<"enter the roll number of the student:-";
 cin>>rollno;
 cout<<endl<<"enter the name of the sudent:-";
 cin>>name;
}
void mark::getdata()
{
cout<<"-------------------------------------------";
 cout<<"\n\nenter the marks of the student";
 cout<<"\n\n enter the first subject marks:-";
 cin>>m1;
  cout<<"\nenter the second subject marks:-";
 cin>>m2;
 m3=m1+m2;


}
void student::show()
{
 cout<<"\n ------------------------------------------";
 cout<<"\n roll number of student is :-"<<rollno;
 cout<<"\n name of the student is :-"<<name;
}
void mark::display()

{
 cout<<"\n marks of the first subject is:-"<<m1;
 cout<<"\n marks of the second subject is:-"<<m2;
 cout<<"\n addition of the marks is :-"<<m3<<"/200 ";
}
void main()
{
 clrscr();
  mark m;
  m.getinfo();
  m.getdata();
  m.show();
  m.display();
 getch();
}