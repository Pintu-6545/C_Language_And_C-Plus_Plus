#include<iostream.h>
#include<conio.h>
class Calculator {
	     float no1,no3;
	     public:
	       float add(float a,float b)
	       {
		  return a+b;
	       }
	       float sub(float a,float b)
	       {
		 return a-b;
	       }
	     float multi(float a,float b)
	      {
		return a*b;
	      }
	    float div(float a,float b)
	      {
		return a/b;
	      }
};

int main()
{
     float num1,num2;
     clrscr();
     Calculator c1;
     cout<<"\n Enter the Number1:";
     cin>>num1;
     cout<<"\n Enter the Number2:";
     cin>>num2;
     cout<<"\n Addition:"<<c1.add(num1,num2);
     cout<<"\n Subtraction:"<<c1.sub(num1,num2);
     cout<<"\n Multiplication:"<<c1.multi(num1,num2);
     cout<<"\n Division:"<<c1.div(num1,num2);
     getch();
}