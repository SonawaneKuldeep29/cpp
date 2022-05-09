//hybrid inheritances.
#include<iostream.h>
#include<conio.h>
class stud
{
 private:
 int rollno;
 char name[15];

 public:
 void get();
 void display();
};

void stud::get()
{
 cout<<"enter the roll number of the student:-";
 cin>>rollno;
 cout<<endl<<"enter the name of the sudent:-";
 cin>>name;
}
void stud::display()
{
 cout<<"\n ------------------------------------------";
 cout<<"\n roll number of student is :-"<<rollno;
 cout<<"\n name of the student is :-"<<name;
}

class mark:public stud
{
 protected:
 int m1,m2;
 public:
 void get();
 void display();
};

void mark::get()
{
stud::get();
cout<<"-------------------------------------------";
 cout<<"\n\nenter the marks of the student";
 cout<<"\n\n enter the first subject marks:-";
 cin>>m1;
  cout<<"\nenter the second subject marks:-";
 cin>>m2;
}

void mark::display()
{
 stud::display();
 cout<<"\n marks of the first subject is:-"<<m1;
 cout<<"\n marks of the second subject is:-"<<m2;
}

class info
{
 private:
 int age;
 char add[50];

 public:
 void get();
 void display();
};

void info::get()
{
 cout<<"enter the age of the student:-";
 cin>>age;
 cout<<endl<<"enter the address:-";
 cin>>add;
}
void info::display()
{
 cout<<"\n ------------------------------------------";
 cout<<"\n age of student is :-"<<age;
 cout<<"\n address is :-"<<add;
}

class result:public mark, public info
{
 private:
 int total;
 public:
 void get();
 void display();
};

void result::get()
{
 mark::get();
 info::get();
 total=m1+m2;
}
void result::display()
{
 mark::display();
 info::display();
 cout<<"\n\ntotal of two marks:-"<<total<<endl;
}
void main()
{
 clrscr();
 result s;
 s.get();
 s.display();
 getch();
}