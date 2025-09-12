#include<iostream.h>
#include<conio.h>
class BankAccount{
	 int balance;
	 public:
	       void diposit(int bal)
	       {
		    balance=bal;
	       }
	       void withdraw()
	       {
		cout<<"\n Withdraw Amount:"<<balance;

	       }
};
   void main()
   {
      int amount;
      clrscr();
      BankAccount b1;
      cout<<"\n Enter the Amount:";
      cin>>amount;
      b1.diposit(amount);
      b1.withdraw();
      getch();
   }