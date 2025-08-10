#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j,rows;
   clrscr();
   printf("\n Enter the Rows:");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
    {
       for(j=1;j<=i;j++)
	{
	    printf(" *");
	}
	printf("\n");
    }


   for(i=rows;i>=1;i--)
    {
	for(j=1;j<=i;j++)
	 {
		printf(" *");
	 }
	 printf("\n");
     }
     getch();
    }