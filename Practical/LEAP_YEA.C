#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("\nEnter the Year:");
	scanf("%d",&year);
	if(( year % 4==0 && year % 100 !=0) || ( year % 400 ==0))
	{
		printf("\n Leap Year %d",year);
	}
	else
	{
		printf("\n Not Leap Year %d",year);
	}
	getch();
}