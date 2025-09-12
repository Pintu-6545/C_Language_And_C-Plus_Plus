#include<stdio.h>
#include<conio.h>
void main()
{
     double lenth,width,area;
     clrscr();
     printf("\n Enter the lenth:");
     scanf("%lf",&lenth);
     printf("\n Enter the Width:");
     scanf("%lf",&width);
     area=lenth*width;
     printf("\n Area of Rectangle:%lf",area);
     getch();

}
