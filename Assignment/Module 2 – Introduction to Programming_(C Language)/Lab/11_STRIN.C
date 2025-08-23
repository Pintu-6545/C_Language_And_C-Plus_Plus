#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char str1[50],str2[50];
   clrscr();
   printf("\n Enter the String1:");
   gets(str1);
   printf("\n Enter the String2:");
   gets(str2);
    // Find a String Lenth Using strlen() method
    printf("\n String1 Lenth:%d",strlen(str1));
    printf("\n String2 Lenth:%d",strlen(str2));

   // Two String are Concanate Using a strcat() method
   printf("\n Concanation String:%s",strcat(str1,str2));

   getch();
 }