#include<stdio.h>
#include<conio.h>
void main()
{
   int no1,no2,add,sub,multi,div,mod;
   clrscr();
   printf("\n Enter the Number1:");
   scanf("%d",&no1);
   printf("\n Enter the Number2:");
   scanf("%d",&no2);
   // Arithmatic Operator
    add=no1+no2;
    sub=no1-no2;
    multi=no1*no2;
    div=no1/no2;
    mod=no1%no2;
    printf("\n **********************************************************");
    printf("\n Arithmatic Operator:");
    printf("\n *****************************************************************");
    printf("\n Addition:%d",add);
    printf("\n Subtraction:%d",sub);
    printf("\n Multification:%d",multi);
    printf("\n Division:%d",div);
    printf("\n Modulo:%d",mod);

    //  Relation Operator
	printf("\n **********************************************************");
	printf("\n Relaton Operator:");
	printf("\n **********************************************************");
       (no1>no2) ? printf("\n Number1 Greater:%d",no1) : printf("\n Number2 Greater:%d",no2);
    // Logical Operator
	printf("\n **********************************************************");
	printf("\n Logical Operator:");
	printf("\n **********************************************************");

	(no1%2==0 && printf("\n Even Number:%d",no1) || printf("\n Odd Number:%d",no1));



    getch();
}