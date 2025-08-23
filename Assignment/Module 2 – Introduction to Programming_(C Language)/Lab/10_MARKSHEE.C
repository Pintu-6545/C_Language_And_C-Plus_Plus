#include<stdio.h>
#include<conio.h>

struct Student
 {
     int rno;
     char name[40];
     int sub1,sub2,sub3,sub4;
     int total;
     float per;
 };
 void main()
 {
   struct Student s1;
   int count;
   float d;
   clrscr();
   printf("\n Enter the Roll No:");
   scanf("%d",&s1.rno);
   printf("\n Enter the Name:");
   scanf("%s",&s1.name);
   printf("\n Enter the Subject1:");
   scanf("%d",&s1.sub1);
   printf("\n Enter the Subject2:");
   scanf("%d",&s1.sub2);
   printf("\n Enter the Subject3:");
   scanf("%d",&s1.sub3);
   printf("\n Enter the Subject4:");
   scanf("%d",&s1.sub4);
   printf("\n******************************************************");
   printf("\n Student Marksheet:");
   printf("\n******************************************************");
   printf("\n Student Roll No:%d",s1.rno);
   printf("\n Student Name:%s",s1.name);
    count=s1.sub1+s1.sub2+s1.sub3+s1.sub4;
   printf("\n Total Marks: %d",count);
   d=s1.per=count/4;
   printf("\n Percentage: %f",d);

   getch();


 }

