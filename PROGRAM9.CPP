//multiple inheretances.
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
class mark
{
 private:
 int a,b,c;
 public:
 void getdata();
 void display();
};
class result:public student,public mark
{
 private:
 int total;
 public:
 void gettotal();
 void showtotal();
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
 cin>>a;
  cout<<"\nenter the second subject marks:-";
 cin>>b;
}
void student::show()
{
 cout<<"\n ------------------------------------------";
 cout<<"\n roll number of student is :-"<<rollno;
 cout<<"\n name of the student is :-"<<name;
}
void mark::display()

{
 cout<<"\n marks of the first subject is:-"<<a;
 cout<<"\n marks of the second subject is:-"<<b;


}
void result::gettotal()
{
 getinfo();
 getdata();
/* total=a+b;*/
}
void result::showtotal()
{
 show();
 display();
 cout<<"\n\n total of marks is :-"<<total;
}
void main()
{
 clrscr();
 result r;
 r.gettotal();
 r.showtotal();
 getch();
}