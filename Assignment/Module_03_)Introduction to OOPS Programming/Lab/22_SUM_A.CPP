#include<iostream.h>
#include<conio.h>
void main()
{
    int ar[5],i;
    int sum=0,no;
    double avg;
    clrscr();
    cout<<"\n Enter the Array Element Data:";
    cin>> no;
    cout<<"\n Enter the Array Data:";
    for(i=0;i<no;i++)
    {
	  cout<<"\n Enter the Array Element:";
	  cin>>ar[i];
    }
    for(i=0;i<no;i++)
    {
	sum+=ar[i];
	avg=sum / no;
    }

    cout<<"\n Sum:"<<sum;
    cout<<"\n Average:"<<avg;
    getch();
}