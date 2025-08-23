#include<stdio.h>
#include<conio.h>
void main()
{
   int no;
   int ch;
   clrscr();
   printf("\n Enter the Number:");
   scanf("%d",&no);
      if(no%2==0)
      {
	     printf("\n Even Number:%d",no);
      }
      else
      {
	    printf("\n Odd Number:%d",no);
      }
   printf("\n*************************************************");
   printf("\n Month Calender:");
    printf("\n*************************************************");
    printf("\n 1. January");
    printf("\n 2. Fabrury");
    printf("\n 3. March");
    printf("\n 4. April");
    printf("\n 5. May");
    printf("\n 6. June");
    printf("\n 7. July");
    printf("\n 8. August");
    printf("\n 9. September");
    printf("\n 10. Ovtober");
    printf("\n 11. November");
    printf("\n 12. December");
    printf("\n Select the Month:");
    scanf("%d",&ch);
	switch(ch)
	{
	    case 1:
		 printf("\n Janunary");
		 break;
	    case 2:
		 printf("\n Fabrury");
		 break;
	    case 3:
		 printf("\n March");
		 break;
	   case 4:
		 printf("\n April");
		 break;
	   case 5:
		 printf("\n May");
		 break;
	   case 6:
		 printf("\n June");
		 break;
	   case 7:
		 printf("\n July");
		 break;
	   case 8:
		 printf("\n August");
		 break;
	   case 9:
		 printf("\n September");
		 break;
	   case 10:
		 printf("\n October");
		 break;
	   case 11:
		 printf("\n November");
		 break;
	  case 12:
		 printf("\n December");
		 break;
	 default:
		printf("\n Invalid Choice:");
		break;
	}

   getch();
}
