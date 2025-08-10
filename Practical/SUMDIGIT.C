#include<stdio.h>
#include<conio.h>
void main()
{
     int no,i,sum=0;
     clrscr();
      printf("\n Enter Array Of Element:");
      scanf("%d",&no);
      for(i=1;i<=no;i++)
      {
       printf("%d,",sum=sum +(i*i));

      }
      printf("\n Sum of Digits:%d",sum);

    getch();
}