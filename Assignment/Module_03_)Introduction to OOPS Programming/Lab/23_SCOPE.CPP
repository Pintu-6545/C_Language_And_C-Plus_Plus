#include<iostream.h>
#include<conio.h>

   //Global Variable define
   int a=45;
   void data()
   {
	int a=95;
	cout<<"\n Local Variable Function inside:"<<a;
	cout<<"\n Global Variable inside Function:"<<::a;
   }
void main()
{
	clrscr();
	cout<<"\n Global Variable:"<<a;
	data();
	getch();
}