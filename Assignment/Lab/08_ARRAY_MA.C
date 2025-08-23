#include<stdio.h>
#include<conio.h>
void main()
{
     int ar[5],i,j;
     int a[3][3],sum=0;
     clrscr();
     printf("\n 5 Integer in One Diamensiton Array:");
     printf("\n Enter the 5 Array Value:");
     for(i=1;i<=5;i++)
     {
	scanf("%d",&ar[i]);
     }
     printf("\nDiaplay Five Value:");
     for(i=1;i<=5;i++)
     {
	 printf("\n%d",ar[i]);
     }
    printf("\n 2D Array Value Matrix (3X3):");
    for(i=0;i<3;i++)
    {
     for(j=0;j<3;j++)
     {
	   scanf("%d",&a[i][j]);
     }
    }
     for(i=0;i<3;i++)
     {
       for(j=0;j<3;j++)
       {
	  sum+=a[i][j];
       }
    }
    printf("\n Sum of Array Data:%d",sum);

     getch();
}