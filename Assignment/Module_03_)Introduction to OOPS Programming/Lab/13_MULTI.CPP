#include<iostream.h>
#include<conio.h>
void main()
{
     int i,no;
     clrscr();
     cout<<"\n Enter the Number:";
     cin>>no;
     cout<<"\n Multification Table:";
     for(i=1;i<=10;i++)
     {
	 cout<<"\n"<<no<<"X"<<i<<"="<<no*i;
     }
     getch();
}
