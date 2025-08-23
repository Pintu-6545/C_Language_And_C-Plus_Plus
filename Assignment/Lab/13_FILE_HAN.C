#include<stdio.h>
#include<conio.h>
void main()
{
   FILE *ftr;
   char data[100];
   clrscr();
   ftr=fopen("Demo.txt","w");
   // Write a Information in the File
   printf("\n Enter the Information:");
   gets(data);
   fputs(data,ftr);
   fclose(ftr);
   // Read a Information in the File
   ftr=fopen("Demo.txt","r");
   fgets(data,100,ftr);
   printf("%s",data);
   fclose(ftr);
   getch();
}