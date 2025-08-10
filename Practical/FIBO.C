#include<stdio.h>
#include<conio.h>
void main()
{
	int i,no,num=0,num1=1,nexttemp;
	clrscr();
	printf("\nEnter the Number of Fibbonacci Series:");
	scanf("%d",&no);
	printf("\nFibbonacci Series:");

	for(i=1;i<=no;i++)
	{
		printf("%d,",num);
		 nexttemp = num + num1;
		 num = num1;
		 num1 = nexttemp;

	}
	printf("\n");

	getch();
}