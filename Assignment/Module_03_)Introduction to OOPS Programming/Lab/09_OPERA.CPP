#include <iostream.h>
#include <conio.h>

#define  bool int
#define true 1
#define false 0
void main()
{
     int no1,no2;
     clrscr();
     cout<<"\n Enter the Number1:";
     cin>>no1;
     cout<<"\n Enter the Number2:";
     cin>>no2;
     // Arithmatic Operatror
     cout<<"\n Arithmatic Operator";
     cout<<"\n Addition:"<<no1+no2;
     cout<<"\n Subtraction:"<<no1-no2;
     cout<<"\n Multiplication:"<<no1*no2;
     cout<<"\n Division:"<<no1/no2;
     cout<<"\n Modulo:"<<no1%no2;
      // Relational Operator
      cout<<"\n\n Relational Operator";
      cout<<"\n No1(Equval to)No2:"<<(no1==no2);
      cout<<"\n No1(Less than)No2:"<<(no1<no2);
      cout<<"\n No1(Greater than)No2:"<<(no1>no2);
      cout<<"\n No1(Less than equval to)No2:"<<(no1<=no2);
      cout<<"\n No1(Greater than equval to)No2:"<<(no1>=no2);
      cout<<"\n No1(Not equval to)No2:"<<(no1!=no2);

      //Logical Operator
      bool is=true;
      bool da=false;
      cout<<"\n\n Logical Operator:";
      cout<<"\n is(Lagical &&) da:"<<(is&&da);
      cout<<"\n is(Logical ||) da:"<<(is||da);
      cout<<"\n is(Logical !)da:"<<(!is);

      // Bitwise Operator
      cout<<"\n\n Bitwise Operator:";
      cout<<"\n No1(Bitwise &) No2:"<<(no1&no2);
      cout<<"\n No1(Bitwise |) No2:"<<(no1|no2);
      cout<<"\n No1(Bitwise ~) No2:"<<(~no1);
      cout<<"\n No1(Bitwise >>)No2:"<<(no1>>no2);
      cout<<"\n No1(Bitwise <<)No2:"<<(no1<<no2);
     getch();
}