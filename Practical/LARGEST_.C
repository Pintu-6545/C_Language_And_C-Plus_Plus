#include<stdio.h>
#include<conio.h>
void main()
   {
	int no1,no2,no3;
	clrscr();
	printf("\nEnter the Number1:");
	scanf("%d",&no1);
	printf("\nEnter the Number2:");
	scanf("%d",&no2);
	printf("\nEnter the Number3:");
	scanf("%d",&no3);

	if(no1>no2 && no1>no3)
	{
	   printf("\nNumber1:=> %d",no1);
	}
	else if(no2> no1 && no2 > no3)
	{
	  printf("\n Number 2: => %d",no2);
	}
	else
	{
		printf("\nNumber 3=> %d",no3);
	}
	getch();
   }