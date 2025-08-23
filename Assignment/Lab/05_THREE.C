#include<stdio.h>
#include<conio.h>
void main()
{
   int no=1,i,no1=1;
   clrscr();
   // using For Loop
  printf("\n**********************************************");
   printf("\n Using For Loop Print (1-10)");
   printf("\n**********************************************");
   for(i=1;i<=10;i++)
   {
	printf("\n Number:%d",i);
   }
   printf("\n**********************************************");
   printf("\n Using While Loop Print (1-10)");
   printf("\n**********************************************");
   while(no<=10)
   {
       printf("\n Number:%d",no);
       no++;
   }
   printf("\n**********************************************");
   printf("\n Using Do While Loop Print (1-10)");
   printf("\n**********************************************");

   do{
      printf("\n Number%d",no1);
      no1++;
   } while(no1<=10);

   getch();
}