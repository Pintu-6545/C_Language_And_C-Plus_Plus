#include<stdio.h>
#include<conio.h>
#include<graphics.h>

float add(float a ,float b)
{
    return a+b;
}
float sub(float a,float b)
{
   return a-b;
}
float multi(float a, float b)
{
   return a*b;
}
float div(float a,float b)
{
  return a/b;
}

int main()
{
   float no1,no2;
   int ch;
   clrscr();
   while(ch!=5)
   {
	 textcolor(10);
	 printf("\n ****************************");
	 cprintf(" Calculator Menu");
	 printf(" ****************************");

	 printf("\n");
	 textcolor(43);
	 cprintf("\n 1. Addition:");
	 printf("\n");
	 textcolor(30);
	 cprintf("\n 2. Subtraction:");
	 printf("\n");
	 textcolor(67);
	 cprintf("\n 3. Multiplication:");
	 printf("\n");
	 textcolor(54);
	 cprintf("\n 4. Division:");
	 printf("\n");
	 textcolor(98);
	 printf("\n 5. Exit");
	 textcolor(34);
	 printf("\n");
	 cprintf("\n Enter the Choice:");
	 scanf("%d",&ch);
	 if(ch>=1 && ch<=4)
	 {    textcolor(29);
	      cprintf("\n Enter the First Number:");
	      scanf("%f",&no1);
	      cprintf("\n Enter the Second Number:");
	      scanf("%f",&no2);
	   switch(ch)
	   {
		  case 1:
		       printf("\n ========================================================");
		       printf("\n Addition: %f",add(no1,no2));
		       printf("\n ========================================================");
		       break;
		  case 2:
			printf("\n ========================================================");
			printf("\n Subtraction: %f",sub(no1,no2));
			printf("\n ========================================================");
			break;
		  case 3:
			printf("\n ========================================================");
			printf("\n Multipication: %f",multi(no1,no2));
			printf("\n ========================================================");
			break;
		  case 4:
			printf("\n ========================================================");
			printf("\n Division: %f",div(no1,no2));
			printf("\n ========================================================");
			break;
	   }
	   }
	   else if(ch!=5)
		{  textcolor(29);
		   cprintf("\n Invalid Choice Please Select Valid Option");
		}
   }
     textcolor(30);
     cprintf("\n Thank you for using this Calculator:");
     getch();
     return 0;
}
