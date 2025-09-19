#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
class Lecture{
       char lectName[30];
       char subName[30];
       char courName[30];
       int numLect;
       public:

	      Lecture()
	      {

		  strcpy(lectName," ");
		  strcpy(subName," ");
		  strcpy(courName," ");
		  numLect=0;
	      }
	      void addLecture( char lec[],char sub[], char cour[],int num)
	      {
		    strcpy(lectName,lec);
		    strcpy(subName,sub);
		    strcpy(courName,cour);
		    numLect=num;
	      }
	    void display()
	    {
	       textcolor(45);
	       cprintf("\n ================= Lecture Management System =================");
	       cout<<"\n Lecture Name:"<<lectName;
	       cout<<"\n Subject Name:"<<subName;
	       cout<<"\n Course Name:"<<courName;
	       cout<<"\n Lecture Number:"<<numLect;
	    }
};
    void main()
    {
		clrscr();
		int lno,i;
		const int number=5;
		Lecture l1[number];
		char lname[35];
		char sname[35];
		char cname[35];
		for(i=0;i<number;i++)
		{
		    cout<<"\n Enter the Lecture Details:";
		    cout<<"\n Enter the Lecture Name:";
		    cin>>lname;
		    cout<<"\n Enter the Subject Name:";
		    cin>>sname;
		    cout<<"\n Enter the Course Name:";
		    cin>>cname;
		    cout<<"\n Enter the Number of Lecture:";
		    cin>>lno;
		    l1[i].addLecture(lname,sname,cname,lno);
		}

		// Display the Lecture Data

		for(i=0;i<number;i++)
		{
		      l1[i].display();
		}
		getch();
    }
