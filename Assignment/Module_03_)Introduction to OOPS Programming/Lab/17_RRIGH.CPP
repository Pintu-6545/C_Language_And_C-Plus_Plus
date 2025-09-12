#include<iostream.h>
#include<conio.h>
void main()
{
   int no,i,j,k;
   clrscr();
   cout<<"\n Enter the Number:";
   cin>>no;
   for(i=1;i<=no;i++)
   {
       for(k=i+1;k<=no;k++)
       {
	   cout<<" ";
       }
     for(j=1;j<=i;j++)
     {
	  cout<<"*";
     }
     cout<<"\n";
   }
   getch();
}