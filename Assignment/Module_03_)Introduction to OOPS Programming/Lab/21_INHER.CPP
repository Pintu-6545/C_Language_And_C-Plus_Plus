#include<iostream.h>
#include<conio.h>
class Person{
	  int pid;
	  char name[40];
	  char address[40];
	  char city[20];
	  char state[15];
	  long int zip;
	  public:
		 void getData()
		 {
		    cout<<"\n Enter the Person Id:";
		    cin>>pid;
		    cout<<"\n Enter the Person Name:";
		    cin>>name;
		    cout<<"\n Enter the Person Address:";
		    cin>>address;
		    cout<<"\n Enter the Person City:";
		    cin>>city;
		    cout<<"\n Enter the Person State:";
		    cin>>state;
		    cout<<"\n Enter the Person Zipcode:";
		    cin>>zip;
		 }
	     void putData()
	     {
		 cout<<"\n ============Person Details========================";
		 cout<<"\n Person Id:"<<pid;
		 cout<<"\n Person Name:"<<name;
		 cout<<"\n Person Address:"<<address;
		 cout<<"\n Person City:"<<city;
		 cout<<"\n Person State:"<<state;
		 cout<<"\n Person Zipcode:"<<zip;
	     }
};
class Teacher : public Person  {

	      int tid;
	      char tname[40];
	      char taddress[30];
	      char tcity[30];
	      char tstate[23];
	      int long tzip;
	      public:
		      void getTdata()
		      {
			cout<<"\n Enter the Teacher Id:";
			cin>>tid;
			cout<<"\n Enter the Teacher Name;";
			cin>>tname;
			cout<<"\n Enter the Teacher Address:";
			cin>>taddress;
			cout<<"\n Enter the Teacher City:";
			cin>>tcity;
			cout<<"\n Enter the Teacher State:";
			cin>>tstate;
			cout<<"\n Enter the Teacher Zipcode:";
			cin>>tzip;
		      }
	      void putTdata()
	      {

		  cout<<"\n ============Teacher Details========================";
		  cout<<"\n Teacher Id:"<<tid;
		  cout<<"\n Teacher Name:"<<tname;
		  cout<<"\n Teacher Address:"<<taddress;
		  cout<<"\n Teacher City:"<<tcity;
		  cout<<"\n Teacher State:"<<tstate;
		  cout<<"\n Teacher Zipcode:"<<tzip;
	      }
};
class Student : public Person{
	      int sid;
	      char sname[40];
	      char saddress[30];
	      char scity[30];
	      char sstate[23];
	      int long szip;
	      public:
	       void getSdata()
	       {
			cout<<"\n Enter the Student Id:";
			cin>>sid;
			cout<<"\n Enter the Student Name;";
			cin>>sname;
			cout<<"\n Enter the Student Address:";
			cin>>saddress;
			cout<<"\n Enter the Student City:";
			cin>>scity;
			cout<<"\n Enter the Student State:";
			cin>>sstate;
			cout<<"\n Enter the Student Zipcode:";
			cin>>szip;
	       }
	       void putSdata()
	       {
		  cout<<"\n ============Student Details========================";
		  cout<<"\n Student Id:"<<sid;
		  cout<<"\n Student Name:"<<sname;
		  cout<<"\n Student Address:"<<saddress;
		  cout<<"\n Student City:"<<scity;
		  cout<<"\n Student State:"<<sstate;
		  cout<<"\n Student Zipcode:"<<szip;
	       }
};
   void main()
   {
      clrscr();
      Teacher t1;
      t1.getData();
      t1.getTdata();
      t1.putData();
      t1.putTdata();
      Student s1;
      s1.getData();
      s1.getSdata();
      s1.putData();
      s1.putSdata();
      getch();
   }