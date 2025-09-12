#include<iostream.h>
#include<conio.h>
void main()
{
     int s1,s2,s3,s4;
      int total;
     float per;
     clrscr();
     cout<<"\n\n Student Marksheet:";
     cout<<"\n Enter the Subject1:";
     cin>>s1;
     cout<<"\n Enter the Subject2:";
     cin>>s2;
     cout<<"\n Enter the Subject3:";
     cin>>s3;
     cout<<"\n Enter the Subject4:";
     cin>>s4;
     total=s1+s2+s3+s4;
     per=total/4;
     cout<<"\n Total:"<<total;
     cout<<"\n Percentage:"<<per;
     if(per>=90 && per<=100)
     {
	cout<<"\n Distriction";
     }
     else if(per>=80 && per<=90)
     {
       cout<<"\n Grade A";
     }
     else if(per>=70 && per<=80)
     {
       cout<<"\n Grade B";
     }
     else if(per>=60 && per<=70)
     {
      cout<<"\n Grade C";
     }
     else if(per>=50 && per<=60)
     {
      cout<<"\n Grade D";
     }
     else
     {
	cout<<"\n Fail";
      }
     getch();
}