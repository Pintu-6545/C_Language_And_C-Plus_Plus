#include<iostream.h>
#include<conio.h>
int fact(int no)
{
     if(no==0 || no==1)
     {
	return 1;
     }
     else
     {
	 return no*fact(no-1);
     }
}
int main()
{
   int num;
    clrscr();
    cout<<"\n Enter the Number:";
    cin>>num;
    cout<<"\n Factorial Number:"<<fact(num);
    getch();
    return 0;

}