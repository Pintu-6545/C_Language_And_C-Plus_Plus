#include<stdio.h>
#include<conio.h>
void main()
{

	int no,no2,temp;
	clrscr();
	printf("\n Enter the Number1:");
	scanf("%d",&no);
	printf("\nEnter the Number2:");
	scanf("%d",&no2);
		temp = no;
		no=no2;
		no2=temp;

	printf("\nSwaping Number no1 = %d and no2 = %d",no,no2);
	getch();
}

