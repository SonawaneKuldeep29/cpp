#include<iostream.h>
#include<conio.h>
class cost;
class book
{
   private:
      int bcode;
      char bname[20];
      int ncopies;
      int rate;

   public:
      void get();
      void display();
      friend cost;
};
void book::get()
{
   cout<<"Enter the book code:";
   cin>>bcode;
   cout<<"Enter the book name:";
   cin>>bname;
   cout<<"Enter the no.of copies:";
   cin>>ncopies;
   cout<<"Enter the rate of book:";
   cin>>rate;
}
void book::display()
{
   cout<<"Book code:"<<bcode<<endl;
   cout<<"Book name:"<<bname<<endl;
   cout<<"No.of copies of book:"<<ncopies<<endl;
   cout<<"Rate of book:"<<rate<<endl;
}
class cost
{
   private:
      int amt;

   public:
      void cal(book b);
};
void cost::cal(book b)
{
   amt=b.ncopies*b.rate;
   cout<<"Amount of book:"<<amt;
}
void main()
{
   clrscr();
   book b1;
   b1.get();
   b1.display();
   cost c;
   c.cal(b1);
   getch();
 }	
