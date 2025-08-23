#include<stdio.h>
#include<conio.h>
void fact(int no)
{
    int i,fact=1;
    for(i=1;i<=no;i++)
    {
	fact=fact*i;
    }
    printf("\n Factorial:%d",fact);

}
void main()
{
     int no1;
     clrscr();
     printf("\n Enter the Number:");
     scanf("%d",&no1);
     fact(no1);
     getch();
}
