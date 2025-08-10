#include<stdio.h>
#include<conio.h>
void main()
{
    int i,no;
    clrscr();
    printf("\n Enter the Number:");
    scanf("%d",&no);
    for(i=2;i<=no;i++)
    {
	if(no%i==0)
	{
		break;
	}
    }
    if(no==i)
    {
	printf("\n Prime Number:%d",no);
    }
    else
    {
	printf("\nNot Prime Number:%d",no);
    }
    getch();
}