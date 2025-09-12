#include<iostream.h>
#include<conio.h>
void main()
{
   int ar[2][2],i,j;
   int sum=0;
   clrscr();
   cout<<"\n The Two Diamention Array(2D)";
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
	  cout<<"\n Enter the Array Element:";
	  cin>>ar[i][j];
       }
   }
   for(i=0;i<2;i++)
   {
     for(j=0;j<2;j++)
     {
	sum+=ar[i][j];
     }
   }
   cout<<"\n Addition:"<<sum;
   getch();
}