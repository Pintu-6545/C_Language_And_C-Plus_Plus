#include<stdio.h>
#include<conio.h>
void main()
{
	int no, original,reminder,result=0;
	clrscr();
	printf("\n Enter the 3 Digits:");
	scanf("%d",&no);
	original=no;
	while(original!=0)
	{
		reminder=original % 10;
		result =result + (reminder * reminder * reminder);
		original = original / 10;
	}
	if(result==no)
	{
	    printf("\n Armstrong Number:%d",no);
	}
	else
	{
	   printf("\n Not Armstrong Number:%d",no);
	}
	getch();
}
