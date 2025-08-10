#include<stdio.h>
#include<conio.h>
void main()
{
   int no, rev=0, remin, origi;
   clrscr();
      printf("\n Enter the Number:");
      scanf("%d",&no);
      origi=no;
      while(no!=0)
      {
		remin = no % 10;
		rev = rev * 10 + remin;
		no = no / 10;
      }
      if(origi == rev)
      {
	printf("\n Palindrone Number%d:",origi);
      }
      else
      {
	printf("\n Not Palindrone Number:%d",origi);
      }
   getch();
}
