#include<stdio.h>
#include<conio.h>
void main()
{
   int no, *ptr;
   clrscr();
   printf("\nEnter the Before Number:");
   scanf("%d",&no);
   ptr=&no;
   printf("\nBefore Number:%d",no);
   printf("\nEnter the Modify Number:");
   scanf("%d",&no);
   *ptr=no;
   printf("\nAfter Modify Number:%d",no);
   getch();
 }
