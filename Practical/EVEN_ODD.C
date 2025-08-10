#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	clrscr();
	printf("\n Enter the Number:");
	scanf("%d",&no);
	if(no%2==0)
	{
	   printf("\n Even Number:%d=>",no);
	}
	else
	{
	  printf("\n Odd Number:%d => ",no);
	}
	getch();
}