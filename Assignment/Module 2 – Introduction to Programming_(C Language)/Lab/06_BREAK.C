#include<stdio.h>
#include<conio.h>
void main()
{
   int i;
   clrscr();
   printf("\n The Print the the Value Skip 5 :");
   for(i=1;i<=10;i++)
   {
      if(i==5)
      {
	    break;
      }
      printf("\n %d",i);
   }
   printf("\n The Print the Value Skip 3  ");
   for(i=1;i<=10;i++)
   {
       if(i==3)
       {
	   continue;
       }
       printf("\n %d",i);
   }
   getch();
}