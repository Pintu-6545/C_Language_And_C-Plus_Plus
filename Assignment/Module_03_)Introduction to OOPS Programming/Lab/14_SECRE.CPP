#include<iostream.h>
#include<conio.h>
void main()
{
     int secretno=36;
     int attempt=0;
     int maxattempt=5;
     int guess;
     clrscr();
     cout<<"\n Guess the Number (between 1 to 100):";
     while(attempt<maxattempt)
     {
	   cout<<"\n Attempt"<<(attempt+1);
	   cout<<"\n Enter the Guess:";
	   cin>>guess;
	   attempt++;

	   if(guess==secretno)
	   {
	      cout<<"\n Correct Number:"<<secretno;
	      break;
	   }
	   else if(guess>secretno)
	   {
	       cout<<"\n Too High Try Again:";
	   }
	   else
	   {
	      cout<<"\n Too Low Try Agrain:";
	   }

     }
     if(guess!=secretno)
     {
       cout<<" Sorry! You are used all attepts .The Correct Number Was:"<<secretno;
     }
    getch();
}