#include<stdio.h>
#include<conio.h>
void main()
{
   int i,no;
   long  fact=1;
   clrscr();
   printf("\n Enter the Number:");
   scanf("%d",&no);
   for(i=1;i<=no;i++)
   {
	fact=fact*i;
   }
   printf("\nFactorial %d",fact);
   getch();
}