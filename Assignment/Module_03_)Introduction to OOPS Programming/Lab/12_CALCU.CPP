#include<iostream.h>
#include<conio.h>
float add(float a, float b)
{
     return a+b;
}
float sub(float a, float b)
{
     return a-b;
}
float multi(float a, float b)
{
     return a*b;
}
float div(float a, float b)
{
     return a/b;
}

int main()
{
    float no1,no2;
    clrscr();
    cout<<"\n Enter the Number1:";
    cin>>no1;
    cout<<"\n Enter the Number2:";
    cin>>no2;
    cout<<"\n Addition:"<<add(no1,no2);
    cout<<"\n Subtraction:"<<sub(no1,no2);
    cout<<"\n Multiplication:"<<multi(no1,no2);
    cout<<"\n Division:"<<div(no1,no2);
    getch();
    return 0;
}