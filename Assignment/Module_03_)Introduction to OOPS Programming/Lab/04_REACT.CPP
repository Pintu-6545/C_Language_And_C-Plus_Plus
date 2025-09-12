#include<iostream.h>
#include<conio.h>
class Rect
{
       double lenth,width;
       public:
       void getArea(double l, double w)
       {
		   lenth=l;
		   width=w;
       }
       void putArea()
       {
	  cout<<"\n Area of Reactangle:"<<lenth*width;
       }
};
void main()
{
    Rect r1;
    double len,wid;
    clrscr();
    cout<<"\n Enter the lenth:";
    cin>> len;
    cout<<"\n Ente the Width:";
    cin>>wid;
    r1.getArea(len,wid);
    r1.putArea();
    getch();
}
