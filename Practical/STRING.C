#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char name[20],last[20];
   int vel;
   clrscr();
   printf("\nEnter the First Name:");
   gets(name);
   printf("\n Enter the Last Name:");
   gets(last);
   vel=strlen(name);
   printf("%d",vel);
   strcat(name,last);
   printf("\n%s",name);

   getch();
}
