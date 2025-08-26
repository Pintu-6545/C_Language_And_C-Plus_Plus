#include<stdio.h>
#include<conio.h>
struct Student
{
    int rno;
    char name[40];
    int sub1,sub2,sub3,sub4;
    float per;
};
void main()
{
    struct Student s2;
    int marks;
    float d;
    clrscr();
    printf("\n Enter the Roll No:");
    scanf("%d",&s2.rno);
    printf("\n Enter the Student Name:");
    scanf("%s",&s2.name);
    printf("\n Enter the Subject1:");
    scanf("%d",&s2.sub1);
    printf("\n Enter the Subject2:");
    scanf("%d",&s2.sub2);
    printf("\n Enter the Subject3:");
    scanf("%d",&s2.sub3);
    printf("\n Enter the Subject4:");
    scanf("%d",&s2.sub4);
    marks=s2.sub1+s2.sub2+s2.sub3+s2.sub4;
    printf("\n ************************************************************");
    printf("\n Student Marksheet");
    printf("\n ************************************************************");
    printf("\n Roll No: %d",s2.rno);
    printf("\n Student Name:%s",s2.name);
    printf("\n Total Marks: %d",marks);
    d=marks/4;
    printf("\n Percentage: %f",d);

    if(d>=90 && d<=100)
    {
       printf("\nDistriction");
    }
    else if(d>=80 && d<=90)
    {
      printf("\n Grade A");
    }
    else if(d>=75 && d<=90)
    {
      printf("\n Grade B");
    }
    else if(d>=60 && d<=75)
    {
      printf("\n Grade C");
    }
    else if(d>=50 && d<=60)
    {
      printf("\n Pass");
    }
    else
    {
       printf("\n Fail");
    }
    getch();
}