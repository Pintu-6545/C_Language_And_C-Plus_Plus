#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
     char s1[40],s2[40];
     int x;
     clrscr();
     cout<<"\n Enter the String:";
     cin>>s1;
     strcpy(s2,s1);
     x=strcmp(s1,s2);
     if(x==0)
     {
       cout<<"\n String is  Palindronme";
     }
     else
     {
       cout<<"\n String is Not Palindrone";
     }
     getch();

}
