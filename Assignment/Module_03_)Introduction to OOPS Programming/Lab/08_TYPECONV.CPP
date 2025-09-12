#include<iostream.h>
#include<conio.h>
void main()
{
     // Implicit convertion
     int no=120;
     float data=no;
     char a='P';
     int v=a;
     clrscr();
     cout<<"Implicit Convertion:"<<endl;
     cout<<"Integer Number:"<<no<<endl;
     cout<<"Convert to float:"<<data<<endl;
     cout<<"Character:"<<a<<endl;
     cout<<"Character to Integer Ascii Vvalue(Implicit):"<<v<<endl;

     // explicit Convertion
     double d=45.36;
     int d2=int(d);
     cout<<"\nExplicit Convertion:"<<endl;
     cout<<"Dobule Value:"<<d<<endl;
     cout<<"Interger to Double (Explicit):"<<d2<<endl;
     getch();
}